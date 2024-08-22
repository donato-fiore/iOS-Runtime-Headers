// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGALLERYPAGECOMPONENT_H
#define SKUIGALLERYPAGECOMPONENT_H

@class NSArray;


#import "SKUIPageComponent.h"

@interface SKUIGalleryPageComponent : SKUIPageComponent

@property (readonly, nonatomic) NSArray *childComponents; // ivar: _childComponents
@property (nonatomic) CGFloat cycleInterval; // ivar: _cycleInterval
@property (nonatomic) BOOL hidesPageIndicator; // ivar: _hidesPageIndicator


-(NSInteger)componentType;
-(id)initWithCustomPageContext:(id)arg0 ;
-(id)metricsElementName;


@end


#endif