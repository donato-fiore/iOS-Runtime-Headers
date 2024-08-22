// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCOUNTERROTATELAYOUT_H
#define TSDCOUNTERROTATELAYOUT_H

@protocol TSDWrappableParent;


#import "TSDContainerLayout.h"

@interface TSDCounterRotateLayout : TSDContainerLayout <TSDWrappableParent>





-(BOOL)descendentWrappablesContainsWrappable:(id)arg0 ;
-(BOOL)supportsFlipping;
-(id)additionalDependenciesForChildLayout:(id)arg0 ;
-(id)descendentWrappables;
-(id)reliedOnLayouts;
-(id)visibleGeometries;
-(struct CGRect )baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGSize )minimumSize;


@end


#endif