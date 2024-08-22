// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDWHAACCESSCONTROLEVENT_H
#define HMDWHAACCESSCONTROLEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;



@interface HMDWHAAccessControlEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isP2PEnabled; // ivar: _isP2PEnabled
@property (nonatomic) BOOL isPasswordSet; // ivar: _isPasswordSet
@property (nonatomic) int privilegeLevel; // ivar: _privilegeLevel
@property (readonly) Class superclass;


+(id)eventWithP2PEnabled:(BOOL)arg0 privilegeLevel:(NSInteger)arg1 passwordSet:(BOOL)arg2 ;
+(int)awdUserPrivilegeFromHMUserPrivilege:(NSInteger)arg0 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif