// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPVOLUMEHUDCONTROLLER_H
#define MPVOLUMEHUDCONTROLLER_H

@class NSHashTable, NSMutableSet;

#import <Foundation/Foundation.h>


@interface MPVolumeHUDController : NSObject {
    NSHashTable *_scenes;
    NSMutableSet *_displays;
    NSMutableSet *_categories;
    BOOL _needsUpdate;
}


@property (readonly, nonatomic) id *mainContext;


+(id)sharedInstance;
-(id)init;
-(void)_addCategory:(id)arg0 ;
-(void)_updateVisibility;
-(void)_updateVisibilityForVolumeDisplays:(id)arg0 inWindowScene:(id)arg1 ;
-(void)addVolumeDisplay:(id)arg0 ;
-(void)registerView:(id)arg0 inContext:(id)arg1 ;
-(void)removeVolumeDisplay:(id)arg0 ;
-(void)setNeedsUpdate;
-(void)unregisterView:(id)arg0 inContext:(id)arg1 ;


@end


#endif