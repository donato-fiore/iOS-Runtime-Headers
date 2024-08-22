// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSPANMATCHCANDIDATE_H
#define CKVSPANMATCHCANDIDATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKVItemInfo.h"
#import "CKVSpanMatch.h"

@interface CKVSpanMatchCandidate : NSObject <NSCopying>



@property (readonly, nonatomic) CKVItemInfo *itemInfo; // ivar: _itemInfo
@property (readonly, nonatomic) CKVSpanMatch *spanMatch; // ivar: _spanMatch


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpanMatchCandidate:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSpanMatch:(id)arg0 itemInfo:(id)arg1 ;


@end


#endif