// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVFTSRESULT_H
#define CKVFTSRESULT_H

@class NSData, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKVItem.h"
#import "CKVOriginApp.h"
#import "CKVSearchField.h"

@interface CKVFTSResult : NSObject <NSCopying>



@property (readonly, nonatomic) CKVItem *item; // ivar: _item
@property (readonly, nonatomic) NSData *itemBuffer; // ivar: _itemBuffer
@property (readonly, nonatomic) CKVOriginApp *originApp; // ivar: _originApp
@property (readonly, nonatomic) NSUUID *recordId; // ivar: _recordId
@property (readonly, nonatomic) CKVSearchField *searchField; // ivar: _searchField


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFTSResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithItem:(id)arg0 itemBuffer:(id)arg1 originApp:(id)arg2 searchField:(id)arg3 recordId:(id)arg4 ;


@end


#endif