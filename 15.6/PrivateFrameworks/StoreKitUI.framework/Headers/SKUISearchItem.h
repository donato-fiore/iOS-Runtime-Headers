// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISEARCHITEM_H
#define SKUISEARCHITEM_H

@class NSArray, NSMutableDictionary;


#import "SKUIItem.h"
#import "SKUIScreenshot.h"

@interface SKUISearchItem : SKUIItem {
    NSArray *_childItemIdentifiers;
    NSMutableDictionary *_loadedChildItems;
}


@property (readonly, nonatomic) SKUIScreenshot *primaryScreenshot; // ivar: _primaryScreenshot
@property (readonly, nonatomic) NSArray *screenshots; // ivar: _screenshots


-(id)childItemForIdentifier:(id)arg0 ;
-(id)childItemIdentifiers;
-(id)initWithLookupDictionary:(id)arg0 ;
-(id)loadedChildItems;
-(void)setChildItem:(id)arg0 forIdentifier:(id)arg1 ;


@end


#endif