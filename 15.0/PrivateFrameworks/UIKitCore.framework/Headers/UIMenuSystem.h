// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIMENUSYSTEM_H
#define UIMENUSYSTEM_H


#import <Foundation/Foundation.h>

#import "_UIMenuBuilder.h"

@interface UIMenuSystem : NSObject {
    _UIMenuBuilder *_defaultBuilder;
}




+(id)contextSystem;
+(id)mainSystem;
-(BOOL)_buildMenuWithBuilder:(id)arg0 fromResponderChain:(id)arg1 atLocation:(struct CGPoint )arg2 inCoordinateSpace:(id)arg3 ;
-(id)_newBuilderFromResponderChain:(id)arg0 atLocation:(struct CGPoint )arg1 inCoordinateSpace:(id)arg2 ;
-(id)initWithRootMenuChildren:(id)arg0 ;
-(void)setNeedsRebuild;
-(void)setNeedsRevalidate;


@end


#endif