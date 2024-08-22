// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSKITSEARCHHIT_H
#define CKVSKITSEARCHHIT_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKVItemInfo.h"

@interface CKVSkitSearchHit : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger docId; // ivar: _docId
@property (readonly, nonatomic) NSSet *fields; // ivar: _fields
@property (readonly, nonatomic) CKVItemInfo *itemInfo; // ivar: _itemInfo
@property (readonly, nonatomic) NSUInteger matchCount; // ivar: _matchCount
@property (readonly, nonatomic) NSInteger rank; // ivar: _rank
@property (readonly, nonatomic) float score; // ivar: _score


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSearchHit:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithItemInfo:(id)arg0 fields:(id)arg1 rank:(NSInteger)arg2 docId:(NSInteger)arg3 score:(float)arg4 matchCount:(NSUInteger)arg5 ;


@end


#endif