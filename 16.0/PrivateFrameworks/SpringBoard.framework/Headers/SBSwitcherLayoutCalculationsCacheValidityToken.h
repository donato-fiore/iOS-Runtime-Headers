// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERLAYOUTCALCULATIONSCACHEVALIDITYTOKEN_H
#define SBSWITCHERLAYOUTCALCULATIONSCACHEVALIDITYTOKEN_H


#import <Foundation/Foundation.h>


@interface SBSwitcherLayoutCalculationsCacheValidityToken : NSObject

@property (nonatomic) NSUInteger appLayoutsGenCount; // ivar: _appLayoutsGenCount
@property (nonatomic) CGRect containerViewBounds; // ivar: _containerViewBounds
@property (nonatomic) NSUInteger modifierEventGenCount; // ivar: _modifierEventGenCount
@property (nonatomic) NSInteger switcherInterfaceOrientation; // ivar: _switcherInterfaceOrientation


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAppLayoutsGenCount:(NSUInteger)arg0 switcherInterfaceOrientation:(NSInteger)arg1 containerViewBounds:(struct CGRect )arg2 modifierEventGenCount:(NSUInteger)arg3 ;


@end


#endif