// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSEARCHABLEITEMCODEDARRAY_H
#define CSSEARCHABLEITEMCODEDARRAY_H

@class NSArray, NSString;


#import "CSDecoder.h"

@interface CSSearchableItemCodedArray : NSArray

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) CSDecoder *items; // ivar: _items
@property (readonly, nonatomic) CSDecoder *itemsContent; // ivar: _itemsContent
@property (readonly, nonatomic) ? obj; // ivar: _obj
@property (retain, nonatomic) NSString *protectionClass; // ivar: _protectionClass


-(NSUInteger)count;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 itemsContent:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif