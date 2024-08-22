// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLSQLITEDATABASECONNECTION_H
#define FLSQLITEDATABASECONNECTION_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface FLSQLiteDatabaseConnection : NSObject

@property (readonly, nonatomic) *sqlite3 db; // ivar: _db
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (copy, nonatomic) NSString *storePath; // ivar: _storePath


-(BOOL)open;
-(id)initWithStorePath:(id)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif