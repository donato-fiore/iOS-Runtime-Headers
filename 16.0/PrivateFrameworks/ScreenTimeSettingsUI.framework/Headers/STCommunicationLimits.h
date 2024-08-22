// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STCOMMUNICATIONLIMITS_H
#define STCOMMUNICATIONLIMITS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STCommunicationLimits : NSObject <NSCopying>



@property NSInteger contactManagementState; // ivar: _contactManagementState
@property BOOL contactsEditable; // ivar: _contactsEditable
@property NSInteger downtimeCommunicationLimit; // ivar: _downtimeCommunicationLimit
@property NSInteger screenTimeCommunicationLimit; // ivar: _screenTimeCommunicationLimit


+(BOOL)hasShownCompatibilityAlertForDSID:(id)arg0 ;
+(void)setHasShownCompatibilityAlert:(BOOL)arg0 forDSID:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCommunicationLimits:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif