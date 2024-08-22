// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMESAVEREQUEST_H
#define HMDHOMESAVEREQUEST_H

@class HMFObject, NSDictionary, NSString;


#import "HMDHome.h"

@interface HMDHomeSaveRequest : HMFObject

@property (readonly, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) BOOL incrementGeneration; // ivar: _incrementGeneration
@property (readonly, nonatomic) NSDictionary *information; // ivar: _information
@property (readonly, nonatomic) BOOL objectChange; // ivar: _objectChange
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSUInteger saveOptions; // ivar: _saveOptions


-(id)_initWithHome:(id)arg0 reason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3 objectChange:(BOOL)arg4 saveOptions:(NSUInteger)arg5 ;
-(id)initWithHome:(id)arg0 reason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3 objectChange:(BOOL)arg4 ;
-(id)initWithReason:(id)arg0 information:(id)arg1 postSyncNotification:(BOOL)arg2 ;
-(id)initWithReason:(id)arg0 information:(id)arg1 saveOptions:(NSUInteger)arg2 ;
-(void)_updateSaveOptions:(BOOL)arg0 reason:(id)arg1 ;


@end


#endif