// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBUSERONBOARDINGSCREENVIEW_H
#define NTPBUSERONBOARDINGSCREENVIEW_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBUserOnboardingScreenView : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int channelPickerPresentationReason; // ivar: _channelPickerPresentationReason
@property (nonatomic) int countOfNotificationsSelected; // ivar: _countOfNotificationsSelected
@property (nonatomic) BOOL fromPersonalizeNews; // ivar: _fromPersonalizeNews
@property (nonatomic) BOOL hasChannelPickerPresentationReason;
@property (nonatomic) BOOL hasCountOfNotificationsSelected;
@property (nonatomic) BOOL hasFromPersonalizeNews;
@property (nonatomic) BOOL hasOnboardingScreenType;
@property (nonatomic) BOOL hasPreviouslyCompletedOnboardingOsVersion;
@property (readonly, nonatomic) BOOL hasReferringSourceApplication;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (nonatomic) BOOL hasUserAction;
@property (readonly, nonatomic) BOOL hasUserActivityType;
@property (nonatomic) int onboardingScreenType; // ivar: _onboardingScreenType
@property (nonatomic) int previouslyCompletedOnboardingOsVersion; // ivar: _previouslyCompletedOnboardingOsVersion
@property (retain, nonatomic) NSString *referringSourceApplication; // ivar: _referringSourceApplication
@property (retain, nonatomic) NSString *referringUrl; // ivar: _referringUrl
@property (nonatomic) int userAction; // ivar: _userAction
@property (retain, nonatomic) NSString *userActivityType; // ivar: _userActivityType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)channelPickerPresentationReasonAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsChannelPickerPresentationReason:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif