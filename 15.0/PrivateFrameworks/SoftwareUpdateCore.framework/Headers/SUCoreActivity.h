// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREACTIVITY_H
#define SUCOREACTIVITY_H

@class NSString, NSNumber, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUCoreActivity : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *UUID; // ivar: _UUID
@property (retain, nonatomic) NSString *activityName; // ivar: _activityName
@property (retain, nonatomic) NSNumber *batteryLevelGreaterThan; // ivar: _batteryLevelGreaterThan
@property (retain, nonatomic) NSNumber *batteryLevelLessThan; // ivar: _batteryLevelLessThan
@property (nonatomic) int carplayState; // ivar: _carplayState
@property (nonatomic) int mediaPlayingState; // ivar: _mediaPlayingState
@property (nonatomic) int networkState; // ivar: _networkState
@property (nonatomic) int phoneCallState; // ivar: _phoneCallState
@property (nonatomic) int plugInState; // ivar: _plugInState
@property (retain, nonatomic) NSDate *runDate; // ivar: _runDate
@property (nonatomic) int screenOnState; // ivar: _screenOnState
@property (nonatomic) int waking; // ivar: _waking
@property (nonatomic) int wifiState; // ivar: _wifiState


+(BOOL)supportsSecureCoding;
+(id)_predicateForKeyPath:(id)arg0 equalToValue:(id)arg1 ;
+(id)backlightOnPredicate:(BOOL)arg0 ;
+(id)batteryLevelPredicateGreaterThan:(id)arg0 ;
+(id)batteryLevelPredicateLessThan:(id)arg0 ;
+(id)carplayPredicate:(BOOL)arg0 ;
+(id)mediaPlayingPredicate:(BOOL)arg0 ;
+(id)networkPredicate:(BOOL)arg0 ;
+(id)phoneCallPredicate:(BOOL)arg0 ;
+(id)pluggedInPredicate:(BOOL)arg0 ;
+(id)systemDatePredicate:(id)arg0 ;
+(id)wifiAvailablePredicate:(BOOL)arg0 ;
-(BOOL)_boolForTriState:(int)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)_mustWake;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_deviceSet;
-(id)_clientIdentifier;
-(id)_dismissalPredicate;
-(id)_stringForTriState:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createContextualPredicate;
-(id)createRegistrationWithHandler:(id)arg0 ;
-(id)description;
-(id)initWithActivityName:(id)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)_qualityOfService;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif