// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXDATABASESTATEMENT_H
#define CXDATABASESTATEMENT_H


#import <Foundation/Foundation.h>


@interface CXDatabaseStatement : NSObject

@property (nonatomic) *sqlite3 database; // ivar: _database
@property (nonatomic) *sqlite3_stmt statement; // ivar: _statement


-(BOOL)bind:(id)arg0 error:(*id)arg1 ;
-(BOOL)bindInt64:(NSInteger)arg0 atIndex:(int)arg1 error:(*id)arg2 ;
-(BOOL)bindText:(char *)arg0 ofLength:(int)arg1 atIndex:(int)arg2 error:(*id)arg3 ;
-(BOOL)executeWithError:(*id)arg0 ;
// -(BOOL)executeWithExpectedColumnCount:(NSInteger)arg0 resultRowHandler:(id)arg1 error:(unk)arg2  ;
// -(BOOL)processResultsWithExpectedColumnCount:(NSInteger)arg0 resultRowHandler:(id)arg1 error:(unk)arg2  ;
-(id)init;
-(id)initWithSQL:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)finalize;


@end


#endif