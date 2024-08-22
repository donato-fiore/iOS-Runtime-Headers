// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEMORIESFEEDSCROLLFILTER_H
#define PXMEMORIESFEEDSCROLLFILTER_H

@class NSDate, NSString;
@protocol PXScrollViewControllerObserver, PXMemoriesFeedScrollFilterDelegate;

#import <Foundation/Foundation.h>

#import "PXScrollViewController.h"
#import "PXMemoriesSpec.h"

@interface PXMemoriesFeedScrollFilter : NSObject <PXScrollViewControllerObserver>

 {
    CGFloat _additionalContentThreshold;
    ? _delegateFlags;
}


@property (retain, nonatomic, setter=_setLastAdditionalContentRequestDate:) NSDate *_lastAdditionalContentRequestDate; // ivar: __lastAdditionalContentRequestDate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXMemoriesFeedScrollFilterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (retain, nonatomic) PXMemoriesSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(id)initWithScrollViewController:(id)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;


@end


#endif