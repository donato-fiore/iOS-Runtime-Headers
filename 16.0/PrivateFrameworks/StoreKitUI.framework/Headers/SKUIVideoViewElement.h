// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIVIDEOVIEWELEMENT_H
#define SKUIVIDEOVIEWELEMENT_H

@class NSArray;


#import "SKUIViewElement.h"
#import "SKUIImageViewElement.h"

@interface SKUIVideoViewElement : SKUIViewElement {
    char _enabled;
}


@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (readonly, nonatomic) SKUIImageViewElement *thumbnailImage; // ivar: _thumbnailImage


-(BOOL)isEnabled;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif