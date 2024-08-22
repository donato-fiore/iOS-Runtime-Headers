// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKBEZIERPATHPOINTMODEL_H
#define NTKBEZIERPATHPOINTMODEL_H

@class NSArray, NSDictionary, UIBezierPath;

#import <Foundation/Foundation.h>


@interface NTKBezierPathPointModel : NSObject {
    NSArray *_pathElements;
    NSDictionary *_horizontalPercentageCache;
}


@property (readonly, nonatomic) UIBezierPath *path; // ivar: _path


-(CGFloat)_computeDistanceBetweenPointA:(struct CGPoint )arg0 andPointB:(struct CGPoint )arg1 ;
-(CGFloat)_estimatePercentageForEndPadding:(CGFloat)arg0 ;
-(id)_buildHorizontalPercentageCache;
-(id)initWithPath:(id)arg0 ;
-(struct CGPoint )_computePointOnPathForHorizontalPercentage:(CGFloat)arg0 ;
-(struct CGPoint )pointOnPathForHorizontalPercentage:(CGFloat)arg0 ;
-(struct CGPoint )pointOnPathForHorizontalPercentage:(CGFloat)arg0 withEndPadding:(CGFloat)arg1 ;


@end


#endif