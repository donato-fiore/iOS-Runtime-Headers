// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCLOUDKITMIRRORINGREQUEST_H
#define NSCLOUDKITMIRRORINGREQUEST_H

@class CKSchedulerActivity, NSUUID;


#import "NSPersistentStoreRequest.h"
#import "NSCloudKitMirroringRequestOptions.h"

@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest {
    BOOL _deferredByBackgroundTimeout;
    CKSchedulerActivity *_activity;
}


@property (readonly, copy, nonatomic) NSCloudKitMirroringRequestOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) id *requestCompletionBlock; // ivar: _requestCompletionBlock
@property (readonly, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier


+(id)allRequestClasses;
-(BOOL)validateForUseWithStore:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)requestType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActivity:(id)arg0 options:(id)arg1 completionBlock:(id)arg2 ;
-(id)initWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif