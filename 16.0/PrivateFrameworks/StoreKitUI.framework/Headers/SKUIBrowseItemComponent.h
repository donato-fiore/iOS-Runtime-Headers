// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIBROWSEITEMCOMPONENT_H
#define SKUIBROWSEITEMCOMPONENT_H

@class NSString;


#import "SKUIPageComponent.h"
#import "SKUIImageViewElement.h"

@interface SKUIBrowseItemComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUIImageViewElement *decorationImage; // ivar: _decorationImage
@property (nonatomic) NSInteger index; // ivar: _index
@property (nonatomic) BOOL showTopBorder; // ivar: _showTopBorder
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(NSInteger)componentType;
-(id)initWithViewElement:(id)arg0 ;


@end


#endif