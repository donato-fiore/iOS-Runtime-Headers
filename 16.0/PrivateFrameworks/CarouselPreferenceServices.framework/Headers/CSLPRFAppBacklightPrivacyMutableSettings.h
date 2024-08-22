// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLPRFAPPBACKLIGHTPRIVACYMUTABLESETTINGS_H
#define CSLPRFAPPBACKLIGHTPRIVACYMUTABLESETTINGS_H

@class NSString;
@protocol CSLPRFAppBacklightPrivacyMutableProperties;

#import <Foundation/Foundation.h>


@interface CSLPRFAppBacklightPrivacyMutableSettings : NSObject <CSLPRFAppBacklightPrivacyMutableProperties>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL privacyDuringAlwaysOnForApp; // ivar: _privacyDuringAlwaysOnForApp
@property (nonatomic) BOOL privacyDuringAlwaysOnForNotification; // ivar: _privacyDuringAlwaysOnForNotification
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL watchAppSupportsAlwaysOnDisplay; // ivar: _watchAppSupportsAlwaysOnDisplay


-(BOOL)isEqualToSettings:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;


@end


#endif