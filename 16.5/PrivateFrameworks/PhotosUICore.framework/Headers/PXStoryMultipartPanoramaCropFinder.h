// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMULTIPARTPANORAMACROPFINDER_H
#define PXSTORYMULTIPARTPANORAMACROPFINDER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXStoryMultipartPanoramaCropFinder : NSObject {
    *CGRect _possibleRects;
    *CGRect _bestRects;
    NSInteger _rectCapacity;
    NSInteger _axis;
    CGRect _referenceContentsRect;
}


@property (readonly, nonatomic) NSArray *saliencyAreas; // ivar: _saliencyAreas


-(CGFloat)_scoreContentsRects:(struct CGRect *)arg0 count:(NSInteger)arg1 ;
-(NSInteger)_findBestRectsWithMaximumCount:(NSInteger)arg0 aspectRatio:(CGFloat)arg1 ;
-(id)bestCropContentsRectsWithAspectRatio:(CGFloat)arg0 axis:(NSInteger)arg1 ;
-(id)init;
-(id)initWithSaliencyAreas:(id)arg0 ;
-(void)_enumeratePossibleContentsRects:(struct CGRect *)arg0 count:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)dealloc;


@end


#endif