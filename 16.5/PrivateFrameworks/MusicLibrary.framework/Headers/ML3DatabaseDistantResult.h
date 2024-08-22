// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3DATABASEDISTANTRESULT_H
#define ML3DATABASEDISTANTRESULT_H

@class NSArray, NSDictionary, NSString;


#import "ML3DatabaseResult.h"
#import "ML3DatabaseDistantConnection.h"

@interface ML3DatabaseDistantResult : ML3DatabaseResult {
    NSArray *_cachedRows;
    NSDictionary *_cachedColumnNameIndexMap;
}


@property (readonly, nonatomic) ML3DatabaseDistantConnection *distantConnection; // ivar: _distantConnection
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSString *sql; // ivar: _sql


-(BOOL)_fetchRowsIfEmpty;
-(NSUInteger)indexForColumnName:(id)arg0 ;
-(id)columnNameIndexMap;
-(id)description;
-(id)init;
-(id)initWithDistantConnection:(id)arg0 sql:(id)arg1 parameters:(id)arg2 ;
-(id)initWithStatement:(id)arg0 ;
-(void)_localEnumerateRowsWithBlock:(id)arg0 ;
-(void)_remoteEnumerateRowsWithBlock:(id)arg0 ;
-(void)enumerateRowsWithBlock:(id)arg0 ;


@end


#endif