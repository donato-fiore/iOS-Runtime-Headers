// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKSHOWCASETEMPLATE_H
#define IKSHOWCASETEMPLATE_H

@class NSArray;


#import "IKViewElement.h"
#import "IKBackgroundElement.h"
#import "IKCarouselElement.h"
#import "IKDocumentBannerElement.h"

@interface IKShowcaseTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, retain, nonatomic) IKCarouselElement *carousel;
@property (readonly, retain, nonatomic) IKDocumentBannerElement *documentBanner;
@property (readonly, retain, nonatomic) NSArray *modes;
@property (readonly, nonatomic) NSUInteger transition;




@end


#endif