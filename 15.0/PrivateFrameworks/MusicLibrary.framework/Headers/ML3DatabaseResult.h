// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3DATABASERESULT_H
#define ML3DATABASERESULT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "ML3DatabaseStatement.h"
#import "ML3DatabaseConnection.h"

@interface ML3DatabaseResult : NSObject {
    ML3DatabaseStatement *_statement;
    ML3DatabaseConnection *_connection;
    NSDictionary *_columnNameIndexMap;
    NSUInteger _limitIndex;
}


@property (copy, nonatomic) NSString *limitProperty; // ivar: _limitProperty
@property (nonatomic) NSInteger limitValue; // ivar: _limitValue


-(BOOL)hasAtLeastOneRow;
-(NSInteger)int64ValueForFirstRowAndColumn;
-(NSUInteger)indexForColumnName:(id)arg0 ;
-(id)_statement;
-(id)columnNameIndexMap;
-(id)init;
-(id)initWithStatement:(id)arg0 connection:(id)arg1 ;
-(id)objectForFirstRowAndColumn;
-(id)objectsInColumn:(NSUInteger)arg0 ;
-(id)rows;
-(id)stringValueForFirstRowAndColumn;
-(void)enumerateRowsWithBlock:(id)arg0 ;


@end


#endif