// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGCERTTRUSTSETTINGS_H
#define PSGCERTTRUSTSETTINGS_H

@class PSListController;



@interface PSGCertTrustSettings : PSListController

@property (retain, nonatomic) id *profileListChangedNotificationObserver; // ivar: _profileListChangedNotificationObserver


-(id)isFullTrustEnabled:(id)arg0 ;
-(id)specifierForTrustSettings:(struct __SecCertificate *)arg0 isRestricted:(BOOL)arg1 ;
-(id)specifiers;
-(id)trustAssetVersionString:(id)arg0 ;
-(id)trustVersionString:(id)arg0 ;
-(void)setFullTrustEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif