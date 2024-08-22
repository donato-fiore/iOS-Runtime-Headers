// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIINTERFACEFACTORY_H
#define VUIINTERFACEFACTORY_H

@protocol VUIDocumentCreator, VUIGroupActivitiesManagerDelegate, VUIOpenURLHandling;

#import <Foundation/Foundation.h>


@interface VUIInterfaceFactory : NSObject {
    ? _documentCreatorFlags;
}


@property (retain, nonatomic) NSObject<VUIDocumentCreator> *documentCreator; // ivar: _documentCreator
@property (retain, nonatomic) NSObject<VUIGroupActivitiesManagerDelegate> *groupActivitiesManager; // ivar: _groupActivitiesManager
@property (retain, nonatomic) NSObject<VUIOpenURLHandling> *openURLHandler; // ivar: _openURLHandler


+(id)sharedInstance;
-(id)accountSettingsViewController;
-(id)rootSplitViewController;
-(id)rootTabBarViewController;
-(id)viewControllerWithDocumentDataSource:(id)arg0 appContext:(id)arg1 ;
-(id)viewControllerWithDocumentDataSource:(id)arg0 appContext:(id)arg1 documentOptions:(id)arg2 ;


@end


#endif