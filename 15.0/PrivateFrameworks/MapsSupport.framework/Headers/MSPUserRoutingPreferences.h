// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPUSERROUTINGPREFERENCES_H
#define MSPUSERROUTINGPREFERENCES_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSPUserRoutingPreferences : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL avoidHighways; // ivar: _avoidHighways
@property (readonly, nonatomic) BOOL avoidTolls; // ivar: _avoidTolls
@property (readonly, nonatomic) NSInteger defaultDisabledTransitModes; // ivar: _defaultDisabledTransitModes
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)copy;
-(id)createUserPreferences;
-(id)initWithAvoidTolls:(BOOL)arg0 avoidHighways:(BOOL)arg1 defaultDisabledTransitModes:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif