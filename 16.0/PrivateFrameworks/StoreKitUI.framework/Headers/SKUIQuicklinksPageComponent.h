// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIQUICKLINKSPAGECOMPONENT_H
#define SKUIQUICKLINKSPAGECOMPONENT_H

@class NSString, NSArray;
@protocol SSMetricsEventFieldProvider;


#import "SKUIPageComponent.h"

@interface SKUIQuicklinksPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *links; // ivar: _links
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(NSInteger)componentType;
-(id)initWithCustomPageContext:(id)arg0 ;
-(id)initWithFeaturedContentContext:(id)arg0 kind:(NSInteger)arg1 ;
-(id)metricsElementName;
-(id)valueForMetricsField:(id)arg0 ;


@end


#endif