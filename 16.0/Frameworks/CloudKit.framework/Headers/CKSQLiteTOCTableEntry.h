// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSQLITETOCTABLEENTRY_H
#define CKSQLITETOCTABLEENTRY_H

@class NSString, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface CKSQLiteTOCTableEntry : NSObject

@property (copy, nonatomic) NSString *creatingClass; // ivar: _creatingClass
@property (copy, nonatomic) NSString *dbTableName; // ivar: _dbTableName
@property (retain, nonatomic) NSNumber *dbVersion; // ivar: _dbVersion
@property (retain, nonatomic) NSNumber *groupID; // ivar: _groupID
@property (copy, nonatomic) NSString *logicalTableName; // ivar: _logicalTableName
@property (retain, nonatomic) NSDictionary *propertyData; // ivar: _propertyData
@property (copy, nonatomic) NSString *schema; // ivar: _schema


-(id)description;


@end


#endif