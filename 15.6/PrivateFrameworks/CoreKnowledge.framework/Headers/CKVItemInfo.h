// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVITEMINFO_H
#define CKVITEMINFO_H

@class NSString, NSUUID, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKVItemInfo : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *itemId; // ivar: _itemId
@property (readonly, nonatomic) NSInteger itemType; // ivar: _itemType
@property (readonly, nonatomic) NSString *originAppId; // ivar: _originAppId
@property (readonly, nonatomic) NSUUID *recordId; // ivar: _recordId
@property (readonly, nonatomic) NSArray *unindexedFields; // ivar: _unindexedFields


+(id)resultItemInfoFromFTSResult:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItemInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithItemId:(id)arg0 itemType:(NSInteger)arg1 originAppId:(id)arg2 recordId:(id)arg3 ;
-(id)initWithItemId:(id)arg0 itemType:(NSInteger)arg1 originAppId:(id)arg2 recordId:(id)arg3 unindexedFields:(id)arg4 ;
-(id)unindexedFieldsWithType:(NSInteger)arg0 ;


@end


#endif