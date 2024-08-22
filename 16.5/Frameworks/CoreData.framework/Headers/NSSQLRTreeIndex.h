// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLRTREEINDEX_H
#define NSSQLRTREEINDEX_H

@class NSString;


#import "NSSQLIndex.h"

@interface NSSQLRTreeIndex : NSSQLIndex {
    NSString *_tableName;
}




-(id)bulkUpdateStatementsForStore:(id)arg0 ;
-(id)dropStatementsForStore:(id)arg0 ;
-(id)generateStatementsForStore:(id)arg0 ;
-(id)initForIndexDescription:(id)arg0 sqlEntity:(id)arg1 ;
-(void)dealloc;


@end


#endif