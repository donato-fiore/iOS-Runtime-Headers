// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFAPPBACKLIGHTPRIVACYRESOLVEDSETTINGS_H
#define CSLPRFAPPBACKLIGHTPRIVACYRESOLVEDSETTINGS_H

@class NSString;
@protocol CSLPRFAppBacklightPrivacyProperties;

#import <Foundation/Foundation.h>


@interface CSLPRFAppBacklightPrivacyResolvedSettings : NSObject <CSLPRFAppBacklightPrivacyProperties>

 {
    id<CSLPRFAppBacklightPrivacyProperties> *_settings;
    id<CSLPRFAppBacklightPrivacyProperties> *_globalSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL privacyDuringAlwaysOnForApp;
@property (readonly, nonatomic) BOOL privacyDuringAlwaysOnForNotification;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL watchAppSupportsAlwaysOnDisplay;


-(BOOL)isEqualToSettings:(id)arg0 ;
-(id)initWithSettings:(id)arg0 globalSettings:(id)arg1 ;


@end


#endif