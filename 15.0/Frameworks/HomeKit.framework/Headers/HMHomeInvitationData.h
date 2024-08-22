// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMHOMEINVITATIONDATA_H
#define HMHOMEINVITATIONDATA_H

@class NSDate, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMHomeInvitationData : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) NSInteger invitationState; // ivar: _invitationState
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
+(id)homeInvitationStateDescription:(NSInteger)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInvitationState:(NSInteger)arg0 invitationIdentifier:(id)arg1 expiryDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif