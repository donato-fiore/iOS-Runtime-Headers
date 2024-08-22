// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFCOREANALYTICSDEVICECONTEXTPAYLOAD_H
#define AFCOREANALYTICSDEVICECONTEXTPAYLOAD_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFCoreAnalyticsDeviceContextPayload : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) NSNumber *alarmFiring; // ivar: _alarmFiring
@property (readonly, copy, nonatomic) NSString *contextIdentifier; // ivar: _contextIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *homeAnnouncementRecency; // ivar: _homeAnnouncementRecency
@property (readonly, copy, nonatomic) NSString *homeAnnouncementState; // ivar: _homeAnnouncementState
@property (readonly, copy, nonatomic) NSString *nearbyDevicesRequestIdentifier; // ivar: _nearbyDevicesRequestIdentifier
@property (readonly, copy, nonatomic) NSString *nearbyProductType; // ivar: _nearbyProductType
@property (readonly, copy, nonatomic) NSNumber *playbackRecency; // ivar: _playbackRecency
@property (readonly, copy, nonatomic) NSString *playbackState; // ivar: _playbackState
@property (readonly, copy, nonatomic) NSString *proximity; // ivar: _proximity
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *targetedResult; // ivar: _targetedResult
@property (readonly, copy, nonatomic) NSNumber *timerFiring; // ivar: _timerFiring


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithNearbyProductType:(id)arg0 proximity:(id)arg1 alarmFiring:(id)arg2 timerFiring:(id)arg3 playbackState:(id)arg4 playbackRecency:(id)arg5 homeAnnouncementState:(id)arg6 homeAnnouncementRecency:(id)arg7 nearbyDevicesRequestIdentifier:(id)arg8 targetedResult:(id)arg9 contextIdentifier:(id)arg10 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif