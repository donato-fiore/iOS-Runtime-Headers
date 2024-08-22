// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDOCUMENTQUERY_H
#define HKDOCUMENTQUERY_H

@class NSString, NSArray;
@protocol HKDocumentQueryClientInterface;


#import "HKQuery.h"

@interface HKDocumentQuery : HKQuery <HKDocumentQueryClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL includeDocumentData; // ivar: _includeDocumentData
@property (readonly) NSUInteger limit; // ivar: _limit
@property (copy, nonatomic) id *resultsHandler; // ivar: _resultsHandler
@property (readonly, copy) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(id)initWithDocumentType:(id)arg0 predicate:(id)arg1 limit:(NSUInteger)arg2 sortDescriptors:(id)arg3 includeDocumentData:(BOOL)arg4 resultsHandler:(id)arg5 ;
-(void)client_deliverDocument:(id)arg0 query:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif