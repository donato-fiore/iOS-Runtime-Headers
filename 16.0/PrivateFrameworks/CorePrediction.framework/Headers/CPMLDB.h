// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPMLDB_H
#define CPMLDB_H

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSDictionary, NSString;
@protocol CPMLAlgorithmProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPMLSchema.h"

@interface CPMLDB : NSObject {
    *NSUInteger repFields;
    NSUInteger maxFieldCount;
    unsigned int commitCountMax;
    unsigned int currentCommitCount;
    unsigned int rowCount;
    *CGFloat cardinality;
    *CGFloat min;
    *CGFloat max;
    *CGFloat mean;
    *CGFloat sumOfX;
    *CGFloat sumOfXX;
    *CGFloat sigma;
    NSMutableArray *indexer;
    NSMutableDictionary *vectorListCardinality;
    NSMutableString *dbTableName;
    CGFloat currentTimeInterval;
    CGFloat minTimeToLogIndex;
    int _openCPMLDBOptions;
    NSDictionary *_cInfo;
    NSString *_trainingModelFileAndPath;
    NSString *_trainingFile;
    id<CPMLAlgorithmProtocol> *_thedelegate;
    NSObject<OS_dispatch_queue> *_dispatch_queue;
}


@property (readonly) CPMLSchema *cpSchema; // ivar: cpSchema
@property (readonly, nonatomic) *sqlite3 db; // ivar: db
@property (readonly) NSString *dbFileName; // ivar: _dbFileName


+(id)getConfigurationFromPlist:(id)arg0 ;
-(BOOL)isColumnContinousData:(unsigned int)arg0 ;
-(BOOL)loadStatisticTable;
-(BOOL)logBatchNSArray:(id)arg0 ;
-(BOOL)logBatchNSDictionary:(id)arg0 ;
-(BOOL)logCTypesV:(*void)arg0 ;
-(BOOL)logNSArray:(id)arg0 ;
-(BOOL)logNSDataDouble:(id)arg0 ;
-(BOOL)logNSDataFloat:(id)arg0 ;
-(BOOL)logNSDictionary:(id)arg0 ;
-(BOOL)logNSObjectV:(id)arg0 ;
-(BOOL)reset;
-(CGFloat)columnQueryFor:(unsigned int)arg0 withQuery:(id)arg1 ;
-(CGFloat)getMaxFor:(unsigned int)arg0 ;
-(CGFloat)getMeanFor:(unsigned int)arg0 ;
-(CGFloat)getMinFor:(unsigned int)arg0 ;
-(CGFloat)getStdDevFor:(unsigned int)arg0 ;
-(CGFloat)updateStatisticsString:(id)arg0 colPosition:(NSUInteger)arg1 ;
-(NSUInteger)getCardinality:(unsigned int)arg0 ;
-(NSUInteger)getColumnCount;
-(NSUInteger)getCombinedRemapTableCardinality:(unsigned int)arg0 ;
-(NSUInteger)getRowCount;
-(id)addValues:(int)arg0 ;
-(id)extractRow:(id)arg0 ;
-(id)fileProtectionClassRequest:(id)arg0 ;
-(id)getColumnName:(NSUInteger)arg0 ;
-(id)getDelegate;
-(id)getDispatchQueue;
-(id)getRemapTable;
-(id)initWithDBName:(id)arg0 dataFromFile:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3 ;
-(id)initWithDBName:(id)arg0 dataFromFile:(id)arg1 withPlistPath:(id)arg2 withWriteOptions:(int)arg3 ;
-(id)initWithDBName:(id)arg0 withConfiguration:(id)arg1 withWriteOptions:(int)arg2 ;
-(id)initWithDBName:(id)arg0 withPlistPath:(id)arg1 withWriteOptions:(int)arg2 ;
-(id)prepInsertStatementForMainTable;
-(int)getSchemaType:(NSUInteger)arg0 ;
-(int)getVectorContent:(NSUInteger)arg0 ;
-(int)getYColumnPosition;
-(void)addColumnToTable:(id)arg0 withNewColumn:(id)arg1 ;
-(void)createTable:(id)arg0 withSchema:(id)arg1 withExistingTable:(BOOL)arg2 ;
-(void)dealloc;
-(void)deleteAllRows:(id)arg0 ;
-(void)deleteRow:(id)arg0 whereMatch:(id)arg1 ;
-(void)doInitCommon:(id)arg0 withDict:(id)arg1 withFileExists:(*BOOL)arg2 withWriteOptions:(int)arg3 ;
-(void)doInitialize:(id)arg0 withConfiguration:(id)arg1 withWriteOptions:(int)arg2 ;
-(void)doInitializeWithDataFile:(id)arg0 dataFromFile:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3 ;
-(void)dropCommands:(id)arg0 ;
-(void)execSQLCommand:(id)arg0 ;
-(void)flushDB;
-(void)indexTable:(id)arg0 withColumn:(id)arg1 ;
-(void)initMaxSizeStatistics:(NSUInteger)arg0 ;
-(void)initStatisticsTable;
-(void)insertIntoTable:(id)arg0 withTuple:(id)arg1 ;
-(void)loadTables;
-(void)printFormat:(id)arg0 ;
-(void)queryDatabase:(id)arg0 whereMatch:(id)arg1 ;
-(void)removeTrainingRow:(id)arg0 ;
-(void)removeTrainingRowData:(CGFloat)arg0 ;
-(void)restart;
-(void)setCPMLAlgorithm:(id)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;
-(void)updateStatistics;
-(void)updateStatisticsReal:(CGFloat)arg0 colPosition:(NSUInteger)arg1 ;
-(void)updateTable:(id)arg0 withAttribute:(id)arg1 whereMatch:(id)arg2 ;


@end


#endif