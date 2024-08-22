// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSPANMATCH_H
#define CKVSPANMATCH_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKVSpanInfo.h"

@interface CKVSpanMatch : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *fields; // ivar: _fields
@property (readonly, nonatomic) CKVSpanInfo *spanInfo; // ivar: _spanInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpanMatch:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSpanInfo:(id)arg0 fields:(id)arg1 ;


@end


#endif