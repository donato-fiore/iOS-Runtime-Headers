// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSHOTFLOWELEMENTDETECTION_H
#define AXSHOTFLOWELEMENTDETECTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXShotflowElementDetection : NSObject {
    float _area;
}


@property (nonatomic) CGRect box; // ivar: _box
@property (readonly, nonatomic) CGPoint boxCenter;
@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) CGRect defaultBox; // ivar: _defaultBox
@property (readonly, nonatomic) float distanceToDefaultBox;
@property (nonatomic) BOOL hasLabel; // ivar: _hasLabel
@property (nonatomic) int label; // ivar: _label
@property (retain, nonatomic) NSString *labelName; // ivar: _labelName
@property (nonatomic) int mergesCount; // ivar: _mergesCount
@property (nonatomic) int scale; // ivar: _scale
@property (readonly, nonatomic) float smartDistance;


-(BOOL)isOverlappingLowMergeDet:(id)arg0 withOverlapThreshold:(float)arg1 withMergeCountDelta:(int)arg2 ;
-(BOOL)isOverlappingSmallFace:(id)arg0 withOverlapThreshold:(float)arg1 withSizeRatio:(float)arg2 ;
-(float)iOa:(id)arg0 ;
-(float)overlap:(id)arg0 ;
-(id)description;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 hasLabel:(BOOL)arg4 label:(int)arg5 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 hasLabel:(BOOL)arg4 label:(int)arg5 labelName:(id)arg6 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 mergesCount:(int)arg4 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 mergesCount:(int)arg4 hasLabel:(BOOL)arg5 label:(int)arg6 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 mergesCount:(int)arg4 hasLabel:(BOOL)arg5 label:(int)arg6 labelName:(id)arg7 ;


@end


#endif