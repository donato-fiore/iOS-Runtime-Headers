// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCTELEPHONYACTIVITY_H
#define PCTELEPHONYACTIVITY_H

@class NSUserActivity, UIImage;
@protocol PCActivity;



@interface PCTelephonyActivity : NSUserActivity <PCActivity>

 {
    UIImage *_callImage;
    BOOL _hostedOnCurrentDeviceIsValid;
    BOOL _hostedOnCurrentDevice;
}




-(BOOL)hostedOnCurrentDevice;
-(BOOL)hostedOnCurrentDeviceIsValid;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)pcactivityType;
-(id)activityString;
-(id)bundleIdentifier;
-(id)callImage;
-(id)callUUID;
-(id)contactIdentifier;
-(id)dateConnected;
-(id)description;
-(id)displayName;
-(id)image;
-(id)initFromKnownCall:(id)arg0 ;
-(id)initFromSensitiveCall:(id)arg0 ;
-(id)initWithActivity:(id)arg0 ;
-(id)title;


@end


#endif