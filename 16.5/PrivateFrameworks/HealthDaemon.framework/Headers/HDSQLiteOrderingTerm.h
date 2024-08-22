// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSQLITEORDERINGTERM_H
#define HDSQLITEORDERINGTERM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDSQLiteOrderingTerm : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (readonly, copy, nonatomic) NSString *expression; // ivar: _expression


+(id)orderingTermWithProperty:(id)arg0 entityClass:(Class)arg1 ascending:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithExpression:(id)arg0 ascending:(BOOL)arg1 ;


@end


#endif