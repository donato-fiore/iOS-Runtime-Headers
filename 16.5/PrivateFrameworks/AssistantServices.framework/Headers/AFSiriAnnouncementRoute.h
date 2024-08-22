// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSIRIANNOUNCEMENTROUTE_H
#define AFSIRIANNOUNCEMENTROUTE_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AFSiriAnnouncementRoute : NSObject {
    BOOL _hearingAidsAnnounceEnabled;
    BOOL _builtInSpeakerAnnounceEnabled;
    BOOL _isRouteCurrentlyPicked;
    BOOL _isDoAPCapable;
    BOOL _isHeadsetInEar;
    BOOL _headsetSupportsIED;
    BOOL _inEarDetectEnabledSpecified;
    BOOL _inEarDetectEnabled;
    BOOL _headsetSupportsAnnounceCalls;
    BOOL _isTipiRoute;
    BOOL _isOtherDeviceConnected;
    BOOL _isInTriangleMode;
    BOOL _shouldTakeRouteFromOtherConnectedDevice;
    BOOL _shouldDeferToOtherConnectedDevice;
    BOOL _isHearingAidsRoute;
    BOOL _isBuiltInSpeakerRoute;
    NSString *_avAudioRouteName;
}


@property (nonatomic) NSInteger announcePlatformForRoute; // ivar: _announcePlatformForRoute
@property (nonatomic) NSUInteger availableAnnouncementRequestTypes; // ivar: _availableAnnouncementRequestTypes
@property (retain, nonatomic) NSDictionary *avscRouteDescription; // ivar: _avscRouteDescription
@property (retain, nonatomic) NSString *btAddress; // ivar: _btAddress
@property (retain, nonatomic) NSString *productID; // ivar: _productID


-(BOOL)_isBuiltInSpeakerRoute;
-(BOOL)_isHearingAidsRoute;
-(NSInteger)_announcementPlatform;
-(NSUInteger)_getRouteCapabilities;
-(id)initWithRouteDescription:(id)arg0 hearingAidsAnnounceEnabled:(BOOL)arg1 builtInSpeakerAnnounceEnabled:(BOOL)arg2 ;
-(void)_initializeInternalState;


@end


#endif