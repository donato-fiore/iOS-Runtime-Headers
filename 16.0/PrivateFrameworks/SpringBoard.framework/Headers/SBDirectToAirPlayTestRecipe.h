// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDIRECTTOAIRPLAYTESTRECIPE_H
#define SBDIRECTTOAIRPLAYTESTRECIPE_H

@class NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>

#import "SBApplication.h"

@interface SBDirectToAirPlayTestRecipe : NSObject <SBTestRecipe>

 {
    SBApplication *_currentlyReadyApp;
    SBApplication *_currentlyPlayingApp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_anyForegroundApplication;
-(id)title;
-(void)_claimForegroundAppIsPlayingVideo;
-(void)_clearPlayingApp;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif