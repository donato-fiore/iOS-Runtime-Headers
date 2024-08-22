// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTSQLITEENTITY_H
#define PPTSQLITEENTITY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PPTSQLiteEntity : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *tableName; // ivar: _tableName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)disambiguatedSQLForProperty:(id)arg0 shouldEscape:(BOOL)arg1 ;
-(id)initWithTableName:(id)arg0 ;
-(id)joinClauseForProperty:(id)arg0 ;


@end


#endif