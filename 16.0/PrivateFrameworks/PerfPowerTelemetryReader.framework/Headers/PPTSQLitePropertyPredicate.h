// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTSQLITEPROPERTYPREDICATE_H
#define PPTSQLITEPROPERTYPREDICATE_H

@class NSString;
@protocol NSCopying;


#import "PPTSQLitePredicate.h"

@interface PPTSQLitePropertyPredicate : PPTSQLitePredicate <NSCopying>



@property (readonly, copy, nonatomic) NSString *property; // ivar: _property


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif