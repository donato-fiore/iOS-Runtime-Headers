// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICAROUSELPAGECOMPONENT_H
#define SKUICAROUSELPAGECOMPONENT_H

@class NSArray, NSString;
@protocol SSMetricsEventFieldProvider;


#import "SKUIPageComponent.h"
#import "SKUICarouselViewElement.h"

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider>

 {
    NSInteger _missingItemCount;
}


@property (readonly, nonatomic) NSArray *carouselItems; // ivar: _carouselItems
@property (readonly, nonatomic) CGFloat cycleInterval; // ivar: _cycleInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SKUICarouselViewElement *viewElement;


-(BOOL)isMissingItemData;
-(NSInteger)componentType;
-(id)initWithFeaturedContentContext:(id)arg0 kind:(NSInteger)arg1 ;
-(id)initWithViewElement:(id)arg0 ;
-(id)metricsElementName;
-(id)valueForMetricsField:(id)arg0 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)updateWithMissingItems:(id)arg0 ;


@end


#endif