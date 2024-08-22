// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIMAINMENUSYSTEM_H
#define _UIMAINMENUSYSTEM_H

@class NSArray;


#import "UIMenuSystem.h"
#import "_UIMenuBuilder.h"
#import "UIMenu.h"

@interface _UIMainMenuSystem : UIMenuSystem {
    _UIMenuBuilder *_automaticallyRebuildingBuilder;
}


@property (readonly, nonatomic) NSArray *_keyCommands;
@property (readonly, nonatomic) UIMenu *_rootMenu;


+(id)_sharedSystem;
-(BOOL)_buildMenuWithBuilder:(id)arg0 fromResponderChain:(id)arg1 atLocation:(struct CGPoint )arg2 inCoordinateSpace:(id)arg3 ;
-(id)_init;
-(void)_automaticallyRebuildIfNeeded;
-(void)dealloc;
-(void)setNeedsRebuild;


@end


#endif