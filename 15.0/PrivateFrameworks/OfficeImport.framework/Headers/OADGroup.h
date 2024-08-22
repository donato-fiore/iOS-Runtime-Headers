// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADGROUP_H
#define OADGROUP_H

@class NSMutableArray, NSString;
@protocol OADDrawableContainer;


#import "OADDrawable.h"

@interface OADGroup : OADDrawable <OADDrawableContainer>

 {
    CGRect mLogicalBounds;
    NSMutableArray *mChildren;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)childCount;
-(id)childAtIndex:(NSUInteger)arg0 ;
-(id)children;
-(id)groupProperties;
-(id)init;
-(struct CGRect )logicalBounds;
-(void)addChild:(id)arg0 ;
-(void)addChildren:(id)arg0 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg0 ;
-(void)removeChild:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)replaceChild:(id)arg0 with:(id)arg1 ;
-(void)setLogicalBounds:(struct CGRect )arg0 ;
-(void)setParentTextListStyle:(id)arg0 ;


@end


#endif