// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDPATHINTERSECTION_H
#define TSDPATHINTERSECTION_H


#import <Foundation/Foundation.h>


@interface TSDPathIntersection : NSObject

@property (nonatomic) CGPoint point; // ivar: mPoint
@property (readonly, nonatomic) NSInteger segment; // ivar: mSegment
@property (readonly, nonatomic) NSInteger segmentB; // ivar: mSegmentB
@property (readonly, nonatomic) CGFloat t; // ivar: mT
@property (readonly, nonatomic) CGFloat tB; // ivar: mTB


-(NSInteger)compareSegmentAndT:(id)arg0 ;
-(NSInteger)compareT:(id)arg0 ;
-(id)initWithSegment:(NSInteger)arg0 atT:(CGFloat)arg1 atPoint:(struct CGPoint )arg2 ;
-(id)initWithSegment:(NSInteger)arg0 atT:(CGFloat)arg1 onSegmentB:(NSInteger)arg2 atT:(CGFloat)arg3 atPoint:(struct CGPoint )arg4 ;


@end


#endif