// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCGAMEINTENTMANAGER_H
#define GCGAMEINTENTMANAGER_H

@class NSUserDefaults, SBSHomeScreenService;

#import <Foundation/Foundation.h>


@interface GCGameIntentManager : NSObject {
    BOOL _enabled;
    NSUserDefaults *_defaults;
    NSUInteger _currentCategory;
    SBSHomeScreenService *_service;
}




+(id)instance;
-(id)init;
-(id)stringForCategory:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)launchToSpringboard;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)stepToNextCategory;
-(void)toggleGamesFolder;
-(void)toggleGamesFolderAndDismissOnly:(BOOL)arg0 ;
-(void)tryPresentAppLibraryPod;


@end


#endif