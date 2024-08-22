// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBUSERNOTIFICATIONALERTELEMENT_H
#define _SBUSERNOTIFICATIONALERTELEMENT_H

@class NSString, UIColor, FBScene;
@protocol SBSystemApertureContextProviding, SAAlertHosting;


#import "SBAlertProvidedContentElement.h"

@interface _SBUserNotificationAlertElement : SBAlertProvidedContentElement <SBSystemApertureContextProviding>

 {
    id<SAAlertHosting> *_alertHost;
}


@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *keyColor; // ivar: _keyColor
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (nonatomic) BOOL preventsAutomaticDismissal; // ivar: _preventsAutomaticDismissal
@property (readonly, nonatomic) FBScene *scene;
@property (readonly) Class superclass;


-(id)alertHost;
-(void)setAlertHost:(id)arg0 ;


@end


#endif