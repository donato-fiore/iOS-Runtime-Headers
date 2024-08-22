// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKAPPDATASET_H
#define IKAPPDATASET_H

@class NSDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IKAppDataSet : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *indexTitles; // ivar: _indexTitles
@property (readonly, copy, nonatomic) NSArray *itemIDs; // ivar: _itemIDs
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSDictionary *usedPrototypesByIdentifier; // ivar: _usedPrototypesByIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithItems:(id)arg0 usedPrototypesByIdentifier:(id)arg1 indexTitles:(id)arg2 ;


@end


#endif