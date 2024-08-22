// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSYNCCONTROLLER_H
#define CKSYNCCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CKSyncController : NSObject

@property (nonatomic) int attachmentRestoredToken; // ivar: _attachmentRestoredToken
@property (nonatomic) int restoreStateChangedToken; // ivar: _restoreStateChangedToken
@property (nonatomic, getter=isRestoring) BOOL restoring; // ivar: _restoring


+(id)sharedInstance;
-(id)init;
-(void)attachmentRestored;
-(void)postAttachmentRestored;
-(void)prioritizeAttachmentAtPath:(id)arg0 ;
-(void)updateRestoreState;


@end


#endif