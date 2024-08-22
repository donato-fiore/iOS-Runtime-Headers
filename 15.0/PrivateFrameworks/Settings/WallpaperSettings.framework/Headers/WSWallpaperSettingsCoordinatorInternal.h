// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WSWALLPAPERSETTINGSCOORDINATORINTERNAL_H
#define WSWALLPAPERSETTINGSCOORDINATORINTERNAL_H

@class UINavigationController;
@protocol WSBaseCoordinator;

#import <Foundation/Foundation.h>


@interface WSWallpaperSettingsCoordinatorInternal : NSObject <WSBaseCoordinator>

 {
    ? childCoordinators;
}


@property (nonatomic, weak) UINavigationController *navigationController; // ivar: navigationController


-(id)init;
-(id)initWithNavigationController:(id)arg0 ;
-(void)dealloc;
-(void)start;


@end


#endif