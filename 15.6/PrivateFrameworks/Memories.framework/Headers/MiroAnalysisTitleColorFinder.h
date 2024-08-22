// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROANALYSISTITLECOLORFINDER_H
#define MIROANALYSISTITLECOLORFINDER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface MiroAnalysisTitleColorFinder : NSObject {
    int _height;
    int _width;
    int _heightOrg;
    int _widthOrg;
    char * _binIndexMap;
    *float _imageDataHSV;
    int _bpr;
    float _fv;
    vector<int, std::allocator<int>> _dominantColorIndex;
    vector<int, std::allocator<int>> _popupColorIndex;
    NSMutableArray *_dominantColor;
    NSMutableArray *_popupColor;
    int _startHeight;
    int _endHeight;
    int _startWidth;
    int _endWidth;
    int _photoType;
    CGRect _ROI;
    CGAffineTransform _transformFromOrientation;
    CGSize _UIImageSize;
}


@property (readonly, copy, nonatomic) NSArray *dominantColors;
@property (readonly, nonatomic) CGRect nativeImageBounds;
@property (readonly, copy, nonatomic) NSArray *popupColors;


-(id)init;
-(id)initWithCGImage:(struct CGImage *)arg0 orientation:(NSInteger)arg1 ;
-(id)initWithUIImage:(id)arg0 ;
-(void)_commonInit;
-(void)analyzeCGImage:(struct CGImage *)arg0 orientation:(NSInteger)arg1 ;
-(void)analyzeUIImage:(id)arg0 ;
-(void)buildModel:(struct CGImage *)arg0 ;
-(void)dealloc;
-(void)findColorHSV;
-(void)findDominantPopupColor:(*float)arg0 ;
-(void)findPeaks:(*float)arg0 startIndex:(int)arg1 ;
-(void)mappingROI;
-(void)rgb2hsv:(float)arg0 g:(float)arg1 b:(float)arg2 h:(*float)arg3 s:(*float)arg4 v:(*float)arg5 ;
-(void)setRegionOfInterest:(struct CGRect )arg0 ;


@end


#endif