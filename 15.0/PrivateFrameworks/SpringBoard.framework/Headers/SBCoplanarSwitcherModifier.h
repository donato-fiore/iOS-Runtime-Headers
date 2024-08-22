// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCOPLANARSWITCHERMODIFIER_H
#define SBCOPLANARSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBCoplanarSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_activeAppLayout;
}


@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) NSInteger spacingType; // ivar: _spacingType
@property (nonatomic) BOOL usesContainerViewBoundsAsActiveFrame; // ivar: _usesContainerViewBoundsAsActiveFrame


-(CGFloat)_offscreenSpacing;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(NSInteger)_indexOfActiveAppLayout;
-(id)initWithActiveAppLayout:(id)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif