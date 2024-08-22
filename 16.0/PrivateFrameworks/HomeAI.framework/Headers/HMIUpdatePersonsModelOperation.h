// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIUPDATEPERSONSMODELOPERATION_H
#define HMIUPDATEPERSONSMODELOPERATION_H

@class HMFOperation, NSUUID;



@interface HMIUpdatePersonsModelOperation : HMFOperation

@property (readonly) BOOL external; // ivar: _external
@property (readonly) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) NSUUID *sourceUUID; // ivar: _sourceUUID


+(id)logCategory;
-(id)initWithSourceUUID:(id)arg0 homeUUID:(id)arg1 external:(BOOL)arg2 ;
-(id)logIdentifier;
-(void)main;
-(void)mainInsideAutoreleasePool;
-(void)updatePersonsModelWithRetryOnError:(BOOL)arg0 ;


@end


#endif