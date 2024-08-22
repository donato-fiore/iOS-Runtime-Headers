// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXMAPCOMPONENTSIZER_H
#define SXMAPCOMPONENTSIZER_H



#import "SXComponentSizer.h"

@interface SXMapComponentSizer : SXComponentSizer



+(BOOL)isCenterSetOnRegion:(struct ? )arg0 ;
+(BOOL)isSpanSetOnRegion:(struct ? )arg0 ;
+(struct ? )mapRectForRegion:(struct ? )arg0 ;
+(struct ? )regionForCoordinates:(id)arg0 ;
+(struct ? )regionFromRegion:(struct ? )arg0 coordinates:(id)arg1 ;
-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 layoutContext:(id)arg1 ;


@end


#endif