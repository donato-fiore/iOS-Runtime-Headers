// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSPLASHBOARDCONTROLLER_H
#define SBSPLASHBOARDCONTROLLER_H

@class XBApplicationController;



@interface SBSplashBoardController : XBApplicationController {
    BOOL _isObservingAppLanguageChanges;
}




-(id)_splashBoardApplicationForBundleID:(id)arg0 ;
-(void)_checkForChangedLocale;
-(void)_handleLocaleDidChangeNotification;
-(void)_observeLocaleChanges;
-(void)configureForLocaleChanges;
-(void)dealloc;


@end


#endif