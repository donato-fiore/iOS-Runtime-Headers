// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSTROKEMASK_H
#define PKSTROKEMASK_H

@class NSData;

#import <Foundation/Foundation.h>


@interface PKStrokeMask : NSObject {
    vector<std::vector<ClipperLib::IntPoint>, std::allocator<std::vector<ClipperLib::IntPoint>>> _maskPaths;
    vector<_PKFloatRange, std::allocator<_PKFloatRange>> _centerlineSlices;
}


@property (readonly, nonatomic) NSData *rawValue;


-(*void)centerlineSlices;
-(*void)maskPaths;
-(id)bezierPath;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithBezierPath:(id)arg0 stroke:(id)arg1 ;
-(id)initWithRawValue:(id)arg0 ;
-(struct CGRect )_boundsWithTransform:(struct CGAffineTransform )arg0 ;
-(void)calculateCenterlineSlices:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif