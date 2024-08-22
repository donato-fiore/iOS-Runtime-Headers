// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIINDEXBARENTRYLISTVIEWELEMENT_H
#define SKUIINDEXBARENTRYLISTVIEWELEMENT_H

@class NSArray, NSString;


#import "SKUIViewElement.h"

@interface SKUIIndexBarEntryListViewElement : SKUIViewElement

@property (readonly, copy, nonatomic) NSArray *childIndexBarEntryElements;
@property (readonly, nonatomic) NSInteger entryListElementType; // ivar: _entryListElementType
@property (readonly, nonatomic, getter=isIndexBarHiddenWhenEmpty) BOOL indexBarHiddenWhenEmpty; // ivar: _indexBarHiddenWhenEmpty
@property (readonly, nonatomic) NSInteger minimumEntityCount; // ivar: _minimumEntityCount
@property (readonly, copy, nonatomic) NSString *targetIndexBarEntryID; // ivar: _targetIndexBarEntryID


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif