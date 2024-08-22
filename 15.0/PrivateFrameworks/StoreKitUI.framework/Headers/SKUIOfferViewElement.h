// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIOFFERVIEWELEMENT_H
#define SKUIOFFERVIEWELEMENT_H



#import "SKUIViewElement.h"

@interface SKUIOfferViewElement : SKUIViewElement

@property (readonly, nonatomic, getter=isCompactModeEnabled) BOOL compactModeEnabled;
@property (readonly, nonatomic, getter=isSimpleOffer) BOOL simpleOffer;


-(NSInteger)pageComponentType;
-(void)enumerateChildrenUsingBlock:(id)arg0 ;


@end


#endif