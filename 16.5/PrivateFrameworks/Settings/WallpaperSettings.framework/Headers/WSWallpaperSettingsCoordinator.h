// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WSWALLPAPERSETTINGSCOORDINATOR_H
#define WSWALLPAPERSETTINGSCOORDINATOR_H

@class UINavigationController;
@protocol WSBaseCoordinator;

#import <Foundation/Foundation.h>

#import "WSWallpaperSettingsCoordinatorInternal.h"

@interface WSWallpaperSettingsCoordinator : NSObject <WSBaseCoordinator>



@property (retain, nonatomic) WSWallpaperSettingsCoordinatorInternal *_storage; // ivar: __storage
@property (readonly, weak, nonatomic) UINavigationController *navigationController;


-(BOOL)runTestWithTestName:(id)arg0 options:(id)arg1 ;
-(id)initWithNavigationController:(id)arg0 ;
-(void)start;


@end


#endif