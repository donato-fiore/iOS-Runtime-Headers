// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVITEMINFO_H
#define KVITEMINFO_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "KVItem.h"
#import "KVPriorInfo.h"

@interface KVItemInfo : NSObject <NSCopying>

 {
    KVItem *_item;
    NSString *_originAppId;
    KVPriorInfo *_priorInfo;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItemInfo:(id)arg0 ;
-(NSInteger)itemType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithItem:(id)arg0 originAppId:(id)arg1 ;
-(id)initWithItem:(id)arg0 originAppId:(id)arg1 priorInfo:(id)arg2 ;
-(id)item;
-(id)itemId;
-(id)originAppId;
-(id)priorInfo;
-(id)unindexedFields;
-(id)unindexedFieldsWithType:(NSInteger)arg0 ;
-(void)setPriorInfo:(id)arg0 ;


@end


#endif