// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSVSQLDATABASE_H
#define MSVSQLDATABASE_H

@class NSString, NSURL;
@protocol MSVSQLExecutable;

#import <Foundation/Foundation.h>


@interface MSVSQLDatabase : NSObject <MSVSQLExecutable>

 {
    *sqlite3 _databaseHandle;
    NSString *_databasePath;
}


@property (readonly, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)executeStatement:(id)arg0 error:(*id)arg1 ;
-(id)executeSQL:(id)arg0 ;
-(id)initWithMemory;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)resultsForStatement:(id)arg0 ;
-(id)statementWithString:(id)arg0 error:(*id)arg1 ;
-(id)transactionWithName:(id)arg0 ;
-(void)dealloc;


@end


#endif