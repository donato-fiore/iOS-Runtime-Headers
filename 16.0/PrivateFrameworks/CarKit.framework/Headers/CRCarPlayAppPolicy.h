// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRCARPLAYAPPPOLICY_H
#define CRCARPLAYAPPPOLICY_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CRCarPlayAppPolicy : NSObject

@property (nonatomic) NSUInteger applicationCategory; // ivar: _applicationCategory
@property (nonatomic) BOOL badgesAppIcon; // ivar: _badgesAppIcon
@property (readonly, copy, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (nonatomic) BOOL canDisplayOnCarScreen; // ivar: _canDisplayOnCarScreen
@property (nonatomic, getter=isCarPlaySupported) BOOL carPlaySupported; // ivar: _carPlaySupported
@property (nonatomic) BOOL handlesCarIntents; // ivar: _handlesCarIntents
@property (nonatomic) BOOL launchNotificationsUsingSiri; // ivar: _launchNotificationsUsingSiri
@property (nonatomic) BOOL launchUsingMusicUIService; // ivar: _launchUsingMusicUIService
@property (nonatomic) BOOL launchUsingSiri; // ivar: _launchUsingSiri
@property (nonatomic) BOOL launchUsingTemplateUI; // ivar: _launchUsingTemplateUI
@property (nonatomic) BOOL showsNotifications; // ivar: _showsNotifications
@property (copy, nonatomic) NSDictionary *siriActivationOptions; // ivar: _siriActivationOptions


-(id)init;


@end


#endif