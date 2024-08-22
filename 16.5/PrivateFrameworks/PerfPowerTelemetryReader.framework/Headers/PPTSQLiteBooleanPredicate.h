// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTSQLITEBOOLEANPREDICATE_H
#define PPTSQLITEBOOLEANPREDICATE_H

@protocol NSCopying;


#import "PPTSQLitePredicate.h"

@interface PPTSQLiteBooleanPredicate : PPTSQLitePredicate <NSCopying>



@property (readonly, nonatomic) BOOL booleanValue; // ivar: _booleanValue


+(id)falsePredicate;
+(id)truePredicate;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)sqlForEntity:(id)arg0 ;


@end


#endif