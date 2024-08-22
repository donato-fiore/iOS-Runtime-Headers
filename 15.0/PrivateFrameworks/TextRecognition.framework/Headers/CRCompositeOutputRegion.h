// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRCOMPOSITEOUTPUTREGION_H
#define CRCOMPOSITEOUTPUTREGION_H



#import "CROutputRegion.h"

@interface CRCompositeOutputRegion : CROutputRegion



-(id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 ;
-(id)outputRegionWithContentsOfCharacterRange:(struct _NSRange )arg0 ;
-(id)outputRegionWithContentsOfQuad:(id)arg0 ;
-(void)setShouldComputeBoundsFromChildren:(BOOL)arg0 ;


@end


#endif