// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTREGISTRATIONDISPLAYSTATUS_H
#define CTREGISTRATIONDISPLAYSTATUS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTRegistrationDisplayStatus : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL changedDueToSimRemoval; // ivar: _changedDueToSimRemoval
@property (nonatomic) BOOL isInHomeCountry; // ivar: _isInHomeCountry
@property (nonatomic) BOOL isRegistrationForcedHome; // ivar: _isRegistrationForcedHome
@property (retain, nonatomic) NSString *registrationDisplayStatus; // ivar: _registrationDisplayStatus


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif