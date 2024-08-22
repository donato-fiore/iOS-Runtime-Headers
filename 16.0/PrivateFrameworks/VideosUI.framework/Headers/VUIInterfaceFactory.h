// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIINTERFACEFACTORY_H
#define VUIINTERFACEFACTORY_H

@class UIViewController;
@protocol VUIControllerPresenter, VUIDocumentCreator, VUIGroupActivitiesManagerDelegate, VUILanguageAwareStringHandling, VUIOpenURLHandling, VUITabBarProtocol;

#import <Foundation/Foundation.h>


@interface VUIInterfaceFactory : NSObject {
    ? _documentCreatorFlags;
}


@property (retain, nonatomic) NSObject<VUIControllerPresenter> *controllerPresenter;
@property (retain, nonatomic) NSObject<VUIDocumentCreator> *documentCreator; // ivar: _documentCreator
@property (retain, nonatomic) NSObject<VUIGroupActivitiesManagerDelegate> *groupActivitiesManager; // ivar: _groupActivitiesManager
@property (retain, nonatomic) NSObject<VUILanguageAwareStringHandling> *languageStringHandler; // ivar: _languageStringHandler
@property (retain, nonatomic) NSObject<VUIOpenURLHandling> *openURLHandler; // ivar: _openURLHandler
@property (retain, nonatomic) UIViewController *rootPresentingViewController; // ivar: _rootPresentingViewController
@property (retain, nonatomic) NSObject<VUITabBarProtocol> *tabBarController; // ivar: _tabBarController
@property (retain, nonatomic) NSObject<VUIControllerPresenter> *welcomeScreenControllerPresenter; // ivar: _welcomeScreenControllerPresenter


+(id)sharedInstance;
-(id)accountSettingsViewController;
-(id)rootSplitViewController;
-(id)viewControllerWithDocumentDataSource:(id)arg0 appContext:(id)arg1 ;
-(id)viewControllerWithDocumentDataSource:(id)arg0 appContext:(id)arg1 documentOptions:(id)arg2 ;


@end


#endif