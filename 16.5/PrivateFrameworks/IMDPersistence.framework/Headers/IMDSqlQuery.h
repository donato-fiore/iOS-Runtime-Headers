// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDSQLQUERY_H
#define IMDSQLQUERY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMDSqlQuery : NSObject

@property (copy, nonatomic) NSString *columns; // ivar: _columns
@property (nonatomic) NSInteger limit; // ivar: _limit
@property (readonly, copy, nonatomic) NSString *tableName; // ivar: _tableName
@property (copy, nonatomic) NSString *where; // ivar: _where


+(id)databaseQuery:(id)arg0 ;
-(id)createQueryString;
-(id)initWithTableName:(id)arg0 ;
-(void)dealloc;


@end


#endif