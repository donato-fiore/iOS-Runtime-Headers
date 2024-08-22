// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPAGEINDICATORSTOREOBJECT_H
#define _UIPAGEINDICATORSTOREOBJECT_H


#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIPageIndicatorStoreObject : NSObject

@property (retain, nonatomic) UIImage *activeImage; // ivar: _activeImage
@property (nonatomic) CGSize activeIndicatorSize; // ivar: _activeIndicatorSize
@property (retain, nonatomic) UIImage *customImage; // ivar: _customImage
@property (nonatomic) NSInteger endIndex; // ivar: _endIndex
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) CGSize indicatorSize; // ivar: _indicatorSize
@property (readonly, nonatomic) CGSize resolvedSize;
@property (nonatomic) NSInteger startIndex; // ivar: _startIndex


-(BOOL)validPageWithinBound:(NSInteger)arg0 ;
-(id)description;
-(id)initWithStartIndex:(NSInteger)arg0 endIndex:(NSInteger)arg1 ;
-(id)splitAtIndex:(NSInteger)arg0 withImage:(id)arg1 active:(BOOL)arg2 ;
-(void)_copyImagesFromObject:(id)arg0 ;
-(void)invalidateLayoutInfo;


@end


#endif