// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCURLLISTENERLISTCONTROLLER_H
#define MCURLLISTENERLISTCONTROLLER_H

@class PSListController;



@interface MCURLListenerListController : PSListController



+(BOOL)showingProfileInstallation;
+(id)currentInstallationController;
+(id)originalURLSender;
+(void)setCurrentInstallationController:(id)arg0 ;
+(void)setOriginalURLSender:(id)arg0 ;
+(void)setShowingProfileInstallation:(BOOL)arg0 ;
-(void)_presentNextController:(id)arg0 withCompletion:(id)arg1 ;
-(void)_pushProfileDetailsForProfileWithID:(id)arg0 withCompletion:(id)arg1 ;
-(void)_showSheetToInstallConfigurationProfileFromInstallationQueueWithCompletion:(id)arg0 ;
-(void)_showSheetToInstallConfigurationProfileFromPurgatoryWithCompletion:(id)arg0 ;
-(void)_showSheetToInstallConfigurationProfileWithData:(id)arg0 withCompletion:(id)arg1 ;
-(void)handleURL:(id)arg0 ;


@end


#endif