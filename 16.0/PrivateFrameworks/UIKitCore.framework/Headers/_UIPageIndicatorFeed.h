// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPAGEINDICATORFEED_H
#define _UIPAGEINDICATORFEED_H

@class NSMutableArray, NSArray;
@protocol _UIPageIndicatorFeedDelegate;

#import <Foundation/Foundation.h>

#import "UIPageControl.h"

@interface _UIPageIndicatorFeed : NSObject {
    UIPageControl *_pageControl;
}


@property (retain, nonatomic) NSMutableArray *activeQueue; // ivar: _activeQueue
@property (weak, nonatomic) NSObject<_UIPageIndicatorFeedDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *indicators;
@property (retain, nonatomic) NSMutableArray *reuseQueue; // ivar: _reuseQueue


-(BOOL)_isPageWithinActiveBounds:(NSInteger)arg0 ;
-(id)activeIndicatorForPage:(NSInteger)arg0 ;
-(id)indicatorForPage:(NSInteger)arg0 ;
-(id)indicatorForPage:(NSInteger)arg0 forSizeOnly:(BOOL)arg1 ;
-(id)initWithPageControl:(id)arg0 ;
-(struct CGSize )indicatorSizeForCustomImage:(id)arg0 ;
-(struct CGSize )indicatorSizeForPage:(NSInteger)arg0 ;
-(void)invalidateIndicators;
-(void)prepareIndicatorsFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)reloadIndicatorImageForPage:(NSInteger)arg0 ;
-(void)reloadIndicatorImages;
-(void)updateReuseQueue;


@end


#endif