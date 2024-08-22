// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLINDEX_H
#define NSSQLINDEX_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "NSFetchIndexDescription.h"
#import "NSSQLEntity.h"

@interface NSSQLIndex : NSObject {
    NSMutableArray *_createStrings;
    NSMutableArray *_dropStrings;
    NSMutableArray *_updateStrings;
}


@property (readonly, retain, nonatomic) NSFetchIndexDescription *indexDescription; // ivar: _indexDescription
@property (readonly, nonatomic) NSSQLEntity *sqlEntity; // ivar: _sqlEntity


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnique;
-(id)bulkUpdateStatementsForStore:(id)arg0 ;
-(id)dropStatementsForStore:(id)arg0 ;
-(id)generateStatementsForStore:(id)arg0 ;
-(id)initForIndexDescription:(id)arg0 sqlEntity:(id)arg1 ;
-(void)dealloc;


@end


#endif