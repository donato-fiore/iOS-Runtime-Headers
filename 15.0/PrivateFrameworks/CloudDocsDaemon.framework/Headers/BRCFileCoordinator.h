// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCFILECOORDINATOR_H
#define BRCFILECOORDINATOR_H

@class NSFileCoordinator, NSURL;
@protocol OS_dispatch_source;


#import "BRCAccountSession.h"

@interface BRCFileCoordinator : NSFileCoordinator {
    BRCAccountSession *_session;
    NSUInteger _startStamp;
    NSURL *_url1;
    NSURL *_url2;
    NSObject<OS_dispatch_source> *_timer;
    id *_doneHandler;
    BOOL _cancelled;
}


@property (readonly, nonatomic) BOOL forRead; // ivar: _forRead
@property (nonatomic) BOOL isUpdateForReconnecting; // ivar: _isUpdateForReconnecting


+(void)itemAtPath:(id)arg0 logicalFilename:(id)arg1 didMoveToPath:(id)arg2 logicalFilename:(id)arg3 hasContentUpdate:(BOOL)arg4 ;
+(void)itemAtPath:(id)arg0 origLogicalName:(id)arg1 didBounceToNewLogicalName:(id)arg2 ;
+(void)itemDidAppearAtPath:(id)arg0 logicalFilename:(id)arg1 ;
+(void)itemDidChangeAtPath:(id)arg0 logicalFilename:(id)arg1 ;
+(void)itemDidDisappearAtPath:(id)arg0 logicalFilename:(id)arg1 ;
-(id)initWithSession:(id)arg0 forRead:(BOOL)arg1 doneHandler:(id)arg2 ;
// -(void)_didObtainCoordination:(id)arg0 context:(id)arg1 url1:(id)arg2 url2:(id)arg3 handler:(id)arg4 fcHandler:(unk)arg5 error:(id)arg6  ;
-(void)_willRequestCoordinationWithContext:(id)arg0 url1:(id)arg1 url2:(id)arg2 ;
-(void)cancel;
-(void)cancelAfterDelay:(CGFloat)arg0 ;
-(void)scheduleDeleteOfItemAtURL:(id)arg0 queue:(id)arg1 taskTracker:(id)arg2 accessor:(id)arg3 ;
-(void)scheduleReadOfItemAtURL:(id)arg0 queue:(id)arg1 taskTracker:(id)arg2 accessor:(id)arg3 ;
-(void)scheduleRenameOfItemAtURL:(id)arg0 toItemAtURL:(id)arg1 contentUpdate:(BOOL)arg2 queue:(id)arg3 taskTracker:(id)arg4 accessor:(id)arg5 ;
-(void)scheduleUpdateOfItemAtURL:(id)arg0 queue:(id)arg1 taskTracker:(id)arg2 accessor:(id)arg3 ;


@end


#endif