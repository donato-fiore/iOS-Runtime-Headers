// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINSERTIONSWITCHERMODIFIER_H
#define SBINSERTIONSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBInsertionSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_appLayout;
    BOOL _isSimulatingPreInsertionState;
    CGPoint _contentOffsetBeforeInsertion;
}


@property (readonly, nonatomic) NSUInteger phase; // ivar: _phase


-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleInsertionEvent:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 ;
-(id)visibleAppLayouts;
-(struct CGPoint )scrollViewContentOffset;
-(void)_performBlockBySimulatingPreInsertionState:(id)arg0 ;


@end


#endif