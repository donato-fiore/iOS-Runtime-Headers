// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIEDITORIALCOMPONENT_H
#define SKUIEDITORIALCOMPONENT_H

@class NSAttributedString, NSString, NSArray;


#import "SKUIPageComponent.h"
#import "SKUILabelViewElement.h"

@interface SKUIEditorialComponent : SKUIPageComponent

@property (readonly, nonatomic, getter=_usesLockupTitle) BOOL _usesLockupTitle; // ivar: _usesLockupTitle
@property (readonly, nonatomic) NSAttributedString *bodyAttributedText;
@property (readonly, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (readonly, nonatomic) SKUIEditorialStyle editorialStyle; // ivar: _style
@property (readonly, nonatomic) NSArray *links; // ivar: _links
@property (readonly, nonatomic) NSInteger maximumBodyLines; // ivar: _maximumBodyLines
@property (readonly, nonatomic) NSString *titleText; // ivar: _titleText
@property (readonly, nonatomic) SKUILabelViewElement *viewElement;


-(NSInteger)componentType;
-(id)initWithBrickRoomText:(id)arg0 ;
-(id)initWithCustomPageContext:(id)arg0 ;
-(id)initWithUberText:(id)arg0 ;
-(id)initWithViewElement:(id)arg0 ;


@end


#endif