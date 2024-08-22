// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPAGECOMPONENT_H
#define SKUIPAGECOMPONENT_H

@class NSString;
@protocol SSMetricsEventFieldProvider;

#import <Foundation/Foundation.h>

#import "SKUIViewElement.h"

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider>



@property (readonly, nonatomic) NSInteger componentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *metricsElementName;
@property (nonatomic, setter=_setMetricsLocationPosition:) NSInteger metricsLocationPosition; // ivar: _metricsLocationPosition
@property (readonly, nonatomic, getter=isMissingItemData) BOOL missingItemData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SKUIViewElement *viewElement; // ivar: _viewElement


-(id)initWithCustomPageContext:(id)arg0 ;
-(id)initWithFeaturedContentContext:(id)arg0 kind:(NSInteger)arg1 ;
-(id)initWithViewElement:(id)arg0 ;
-(id)valueForMetricsField:(id)arg0 ;
-(void)_enumerateMissingItemIdentifiersFromBricks:(id)arg0 startIndex:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)_enumerateMissingItemIdentifiersFromLinks:(id)arg0 startIndex:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)_enumerateMissingItemIdentifiersFromLockups:(id)arg0 startIndex:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif