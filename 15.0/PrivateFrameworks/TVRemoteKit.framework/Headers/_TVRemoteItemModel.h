// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVREMOTEITEMMODEL_H
#define _TVREMOTEITEMMODEL_H

@class NSArray, NSString;
@protocol NSSecureCoding, TVRemoteItem;

#import <Foundation/Foundation.h>


@interface _TVRemoteItemModel : NSObject <NSSecureCoding>



@property (nonatomic, getter=isGroup) BOOL group; // ivar: _group
@property (nonatomic) NSInteger icon; // ivar: _icon
@property (retain, nonatomic) NSObject<TVRemoteItem> *item; // ivar: _item
@property (nonatomic) NSInteger itemType; // ivar: _itemType
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)_stringForItemType:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif