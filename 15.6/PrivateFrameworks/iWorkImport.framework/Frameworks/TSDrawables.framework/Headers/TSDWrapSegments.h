// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDWRAPSEGMENTS_H
#define TSDWRAPSEGMENTS_H


#import <Foundation/Foundation.h>


@interface TSDWrapSegments : NSObject {
    *? mSegments;
    NSInteger mSegmentCount;
    CGRect mBounds;
}


@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) NSInteger segmentCount;
@property (readonly, nonatomic) *? segments;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)wrapSegmentsByApplyingAffineTransform:(struct CGAffineTransform )arg0 ;
-(void)dealloc;
-(void)p_buildSegmentsForPath:(id)arg0 ;
-(void)transformUsingAffineTransform:(struct CGAffineTransform )arg0 ;


@end


#endif