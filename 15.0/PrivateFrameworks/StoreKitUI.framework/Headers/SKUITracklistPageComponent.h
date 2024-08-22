// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUITRACKLISTPAGECOMPONENT_H
#define SKUITRACKLISTPAGECOMPONENT_H



#import "SKUIPageComponent.h"
#import "SKUITracklistViewElement.h"

@interface SKUITracklistPageComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUITracklistViewElement *viewElement;


-(NSInteger)componentType;
-(id)initWithViewElement:(id)arg0 ;


@end


#endif