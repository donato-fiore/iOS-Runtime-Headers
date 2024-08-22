// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKINGSTORECACHEUPDATEGROUPTOKENOPERATION_H
#define HMDBACKINGSTORECACHEUPDATEGROUPTOKENOPERATION_H

@class CKServerChangeToken;


#import "HMDBackingStoreOperation.h"
#import "HMDBackingStoreCacheGroup.h"

@interface HMDBackingStoreCacheUpdateGroupTokenOperation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *record; // ivar: _record
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken


-(id)initWithGroup:(id)arg0 serverChangeToken:(id)arg1 resultBlock:(id)arg2 ;
-(id)mainReturningError;


@end


#endif