// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPROTATEDREGION_H
#define CPROTATEDREGION_H



#import "CPRegion.h"

@interface CPRotatedRegion : CPRegion {
    CGRect normalizedBounds;
    BOOL dirtyNormalizedBounds;
}




-(CGFloat)bottom;
-(CGFloat)center;
-(CGFloat)left;
-(CGFloat)right;
-(CGFloat)top;
-(id)init;
-(struct CGPoint )anchor;
-(struct CGRect )normalizedBounds;
-(void)fitBoundsToChildren;
-(void)resizeWith:(id)arg0 ;


@end


#endif