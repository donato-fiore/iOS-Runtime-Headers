// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCDAFPARTICIPATION_H
#define SCDAFPARTICIPATION_H

@class NSNumber, NSArray, NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCDAFAdvertisement.h"
#import "SCDAFDevice.h"

@interface SCDAFParticipation : NSObject <NSSecureCoding>



@property (retain, nonatomic) SCDAFAdvertisement *advertisement; // ivar: _advertisement
@property (copy, nonatomic) NSNumber *alarmState; // ivar: _alarmState
@property (retain, nonatomic) NSArray *boosts; // ivar: _boosts
@property (copy, nonatomic) NSString *cdaId; // ivar: _cdaId
@property (retain, nonatomic) SCDAFDevice *device; // ivar: _device
@property (copy, nonatomic) NSNumber *mediaState; // ivar: _mediaState
@property (retain, nonatomic) NSArray *nearbyDevices; // ivar: _nearbyDevices
@property (nonatomic) CGFloat rawGoodnessScore; // ivar: _rawGoodnessScore
@property (copy, nonatomic) NSString *requestId; // ivar: _requestId
@property (retain, nonatomic) NSDate *requestStartDate; // ivar: _requestStartDate
@property (nonatomic) NSUInteger result; // ivar: _result
@property (retain, nonatomic) NSArray *seenAdvertisements; // ivar: _seenAdvertisements
@property (copy, nonatomic) NSNumber *timeSinceLastWinInMilliseconds; // ivar: _timeSinceLastWinInMilliseconds
@property (copy, nonatomic) NSNumber *timeSinceTriggerInMilliseconds; // ivar: _timeSinceTriggerInMilliseconds
@property (copy, nonatomic) NSNumber *timerState; // ivar: _timerState
@property (copy, nonatomic) NSNumber *triggerType; // ivar: _triggerType
@property (retain, nonatomic) NSArray *trumpReasons; // ivar: _trumpReasons
@property (copy, nonatomic) NSString *userRequestText; // ivar: _userRequestText
@property (retain, nonatomic) NSDate *voiceTriggerDate; // ivar: _voiceTriggerDate
@property (retain, nonatomic) SCDAFAdvertisement *winnerAdvertisement; // ivar: _winnerAdvertisement


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif