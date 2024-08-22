// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHLINEELEMENTBUILDER_H
#define TSCHLINEELEMENTBUILDER_H



#import "TSCHScatterElementBuilder.h"

@interface TSCHLineElementBuilder : TSCHScatterElementBuilder



-(BOOL)needsSeparateHitTestingPaths;
-(struct CGPoint )labelPointForPosition:(unsigned int)arg0 rect:(struct CGRect )arg1 stringSize:(struct CGSize )arg2 symbolType:(int)arg3 ;
-(void)p_addKnobsForPoint:(struct CGPoint )arg0 strokedUnitSymbolRect:(struct CGRect )arg1 toKnobSet:(id)arg2 symbolsShowing:(BOOL)arg3 includePoint:(BOOL)arg4 ;


@end


#endif