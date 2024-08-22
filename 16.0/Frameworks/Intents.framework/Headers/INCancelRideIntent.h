// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCANCELRIDEINTENT_H
#define INCANCELRIDEINTENT_H

@class NSString;


#import "INIntent.h"

@interface INCancelRideIntent : INIntent

@property (readonly, copy, nonatomic) NSString *rideIdentifier; // ivar: _rideIdentifier


+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRideIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif