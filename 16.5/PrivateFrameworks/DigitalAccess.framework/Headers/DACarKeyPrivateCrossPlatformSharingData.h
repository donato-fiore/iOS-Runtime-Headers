// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACARKEYPRIVATECROSSPLATFORMSHARINGDATA_H
#define DACARKEYPRIVATECROSSPLATFORMSHARINGDATA_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DACarKeyPrivateCrossPlatformSharingData : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *pairedEntityIdentifier; // ivar: _pairedEntityIdentifier
@property (readonly, nonatomic) NSString *vehicleEnteredPasscode; // ivar: _vehicleEnteredPasscode


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVehicleEnteredPasscode:(id)arg0 pairedEntityIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif