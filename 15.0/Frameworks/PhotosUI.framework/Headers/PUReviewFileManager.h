// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUREVIEWFILEMANAGER_H
#define PUREVIEWFILEMANAGER_H

@class NSFileManager, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PUReviewFileManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_fileManagementQueue; // ivar: __fileManagementQueue
@property (readonly, nonatomic) NSFileManager *_fileManager; // ivar: __fileManager
@property (readonly, nonatomic) NSURL *_safePathURL; // ivar: __safePathURL


+(id)defaultManager;
-(BOOL)_allowedToDeleteItemAtURL:(id)arg0 ;
-(BOOL)_removeItemAtURL:(id)arg0 error:(*id)arg1 stackshot:(id)arg2 ;
-(BOOL)removeItemAtURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithFileManager:(id)arg0 ;
-(void)removeItemAtURL:(id)arg0 completion:(id)arg1 ;


@end


#endif