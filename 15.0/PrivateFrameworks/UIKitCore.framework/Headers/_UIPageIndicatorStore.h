// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPAGEINDICATORSTORE_H
#define _UIPAGEINDICATORSTORE_H

@class NSMutableArray;
@protocol _UIPageIndicatorStoreDelegate;

#import <Foundation/Foundation.h>

#import "UIImage.h"
#import "_UIPageIndicatorStoreObject.h"

@interface _UIPageIndicatorStore : NSObject {
    ? _update;
    CGFloat _fittingLength;
    CGSize _cachedSize;
    UIImage *_defaultImage;
    _UIPageIndicatorStoreObject *_defaultObject;
}


@property (weak, nonatomic) NSObject<_UIPageIndicatorStoreDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (readonly, nonatomic) UIImage *indicatorImage;
@property (nonatomic) CGFloat indicatorSpacing; // ivar: _indicatorSpacing
@property (retain, nonatomic) UIImage *preferredImage; // ivar: _preferredImage
@property (retain, nonatomic) NSMutableArray *store; // ivar: _store


-(CGFloat)indicatorContentLengthForRange:(struct _NSRange )arg0 ;
-(CGFloat)indicatorPositionForContinuousPage:(CGFloat)arg0 ;
-(NSInteger)_objectIndexForPage:(NSInteger)arg0 lower:(NSInteger)arg1 upper:(NSInteger)arg2 ;
-(NSInteger)lastPage;
-(NSInteger)numberOfVisibleIndicatorsForStartIndex:(NSInteger)arg0 fittingLength:(CGFloat)arg1 ;
-(NSInteger)objectIndexForPage:(NSInteger)arg0 ;
-(id)_defaultIndicatorImage;
-(id)customIndicatorImageForPage:(NSInteger)arg0 ;
-(id)indicatorImageForPage:(NSInteger)arg0 ;
-(id)init;
-(struct CGSize )_indicatorSizeForObject:(id)arg0 ;
-(struct CGSize )contentSizeForNumberOfPages:(NSInteger)arg0 ;
-(struct CGSize )indicatorSize;
-(struct CGSize )indicatorSizeForPage:(NSInteger)arg0 ;
-(struct CGSize )sizeForMaximumContentSizeFittingLength:(CGFloat)arg0 ;
-(void)_insertImage:(id)arg0 forPage:(NSInteger)arg1 ;
-(void)_removeImageForPage:(NSInteger)arg0 ;
-(void)invalidateLayoutCache;
-(void)updateImage:(id)arg0 forPage:(NSInteger)arg1 ;
-(void)updateStoreForNumberOfPages:(NSInteger)arg0 ;
-(void)validateDataStore;


@end


#endif