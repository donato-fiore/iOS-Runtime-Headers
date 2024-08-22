// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSCREENTIMECONFIGURATION_H
#define STSCREENTIMECONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STScreenTimeConfiguration : NSObject <NSSecureCoding>



@property BOOL enforcesChildRestrictions; // ivar: _enforcesChildRestrictions


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnforcesChildRestrictions:(BOOL)arg0 ;
-(void)_stScreenTimeConfigurationCommonInitWithEnforcesChildRestrictions:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif