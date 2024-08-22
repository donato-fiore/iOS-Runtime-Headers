// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPINDEX_H
#define CPINDEX_H

@class NSMutableArray, NSString;
@protocol CPIndex, CPXPCConnection;

#import <Foundation/Foundation.h>


@interface CPIndex : NSObject <CPIndex>



@property (nonatomic) BOOL batchOpen; // ivar: _batchOpen
@property (retain, nonatomic) NSMutableArray *batchedItemIdentifiersToDelete; // ivar: _batchedItemIdentifiersToDelete
@property (retain, nonatomic) NSMutableArray *batchedItemsToIndex; // ivar: _batchedItemsToIndex
@property (retain, nonatomic) NSObject<CPXPCConnection> *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL noBatching; // ivar: _noBatching
@property (copy, nonatomic) NSString *protectionClass; // ivar: _protectionClass
@property (readonly) Class superclass;


+(id)log;
+(id)signpostLog;
-(id)initWithName:(id)arg0 protectionClass:(id)arg1 disableBatching:(BOOL)arg2 connection:(id)arg3 ;
-(void)beginIndexBatch;
-(void)deleteAllItemsWithCompletionHandler:(id)arg0 ;
-(void)deleteItemsWithDomainIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteItemsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)endIndexBatchWithClientState:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchLastClientStateWithCompletionHandler:(id)arg0 ;
-(void)indexItems:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif