// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDATABASEREADER_H
#define PLDATABASEREADER_H


#import <Foundation/Foundation.h>


@interface PLDatabaseReader : NSObject

@property *sqlite3 dbConnection; // ivar: _dbConnection


-(id)initWithDatabaseFile:(id)arg0 ;
-(id)performStatement:(struct sqlite3_stmt *)arg0 ;
-(id)prepareStatementAndPerformWithString:(id)arg0 ;
-(id)stringValueOfTable:(id)arg0 ;
-(id)tableNamesFromDatabase;
-(struct sqlite3 *)openDatabaseFile:(id)arg0 ;
-(void)dealloc;


@end


#endif