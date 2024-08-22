// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLITEINDEXSTATISTICS_H
#define NSSQLITEINDEXSTATISTICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSSQLiteIndexStatistics : NSObject

@property (readonly, nonatomic) NSInteger executionCount; // ivar: _executionCount
@property (readonly, nonatomic) NSString *indexName; // ivar: _indexName
@property (readonly, nonatomic) NSInteger instructionCount; // ivar: _instructionCount
@property (readonly, nonatomic) NSInteger rowCount; // ivar: _rowCount
@property (readonly, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier


-(id)init;
-(id)initWithName:(id)arg0 storeID:(id)arg1 ;
-(id)initWithResultDictionary:(id)arg0 storeID:(id)arg1 ;
-(void)dealloc;


@end


#endif