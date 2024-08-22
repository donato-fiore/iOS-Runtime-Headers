// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVFTSRESULT_H
#define CKVFTSRESULT_H

@class KVItem, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKVOriginApp.h"
#import "CKVSearchField.h"

@interface CKVFTSResult : NSObject <NSCopying>



@property (readonly, nonatomic) KVItem *item; // ivar: _item
@property (readonly, nonatomic) CKVOriginApp *originApp; // ivar: _originApp
@property (readonly, nonatomic) NSUUID *recordId; // ivar: _recordId
@property (readonly, nonatomic) CKVSearchField *searchField; // ivar: _searchField


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFTSResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithItem:(id)arg0 originApp:(id)arg1 searchField:(id)arg2 recordId:(id)arg3 ;


@end


#endif