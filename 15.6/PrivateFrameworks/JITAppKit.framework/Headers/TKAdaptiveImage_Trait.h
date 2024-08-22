// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKADAPTIVEIMAGE_TRAIT_H
#define TKADAPTIVEIMAGE_TRAIT_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface TKAdaptiveImage_Trait : NSObject

@property (nonatomic) CGRect crop; // ivar: _crop
@property (nonatomic) NSInteger horizontalSizeClass; // ivar: _horizontalSizeClass
@property (nonatomic) CGSize maxSize; // ivar: _maxSize
@property (nonatomic) CGSize minSize; // ivar: _minSize
@property (nonatomic) CGFloat quality; // ivar: _quality
@property (nonatomic) CGSize relativeSize; // ivar: _relativeSize
@property (nonatomic) CGSize size; // ivar: _size
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) BOOL useReadableWidth; // ivar: _useReadableWidth
@property (nonatomic) NSInteger verticalSizeClass; // ivar: _verticalSizeClass


-(BOOL)compatibleWithTrait:(id)arg0 ;
-(id)init;


@end


#endif