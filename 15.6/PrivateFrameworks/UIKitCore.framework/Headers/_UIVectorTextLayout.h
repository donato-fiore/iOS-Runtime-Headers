// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVECTORTEXTLAYOUT_H
#define _UIVECTORTEXTLAYOUT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_UIVectorTextLayoutInfo.h"
#import "_UIVectorTextLayoutParameters.h"

@interface _UIVectorTextLayout : NSObject {
    NSArray *_runs;
    NSUInteger _numberOfLines;
    CGRect _boundingRect;
    CGRect _usedBoundingRect;
    _NSRange _fitRange;
    CGFloat _firstLineBaseline;
    CGFloat _lastLineBaseline;
    _UIVectorTextLayoutInfo *_layoutInfo;
}


@property (readonly, nonatomic) CGRect boundingRect;
@property (readonly, nonatomic) CGAffineTransform coordinateAdjustment; // ivar: _coordinateAdjustment
@property (readonly, nonatomic) CGFloat firstLineBaseline;
@property (readonly, nonatomic) CGFloat lastLineBaseline;
@property (readonly, nonatomic) NSUInteger numberOfLines;
@property (readonly, nonatomic) NSUInteger numberOfRuns;
@property (readonly, copy, nonatomic) _UIVectorTextLayoutParameters *parameters;
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) _NSRange textRange;
@property (readonly, nonatomic) CGRect usedBoundingRect;


-(BOOL)hasLayout;
-(id)description;
-(id)initWithTextParameters:(id)arg0 ;
-(id)layoutDescription;
-(void)_layoutIfNeeded;
-(void)enumerateRunsUsingBlock:(id)arg0 ;
-(void)resetLayout;


@end


#endif