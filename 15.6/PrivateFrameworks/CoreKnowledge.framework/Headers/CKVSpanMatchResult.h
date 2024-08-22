// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSPANMATCHRESULT_H
#define CKVSPANMATCHRESULT_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKVItemInfo.h"

@interface CKVSpanMatchResult : NSObject <NSCopying>



@property (readonly, nonatomic) CKVItemInfo *itemInfo; // ivar: _itemInfo
@property (readonly, nonatomic) NSSet *spanMatches; // ivar: _spanMatches


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpanMatchResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithItemInfo:(id)arg0 spanMatches:(id)arg1 ;


@end


#endif