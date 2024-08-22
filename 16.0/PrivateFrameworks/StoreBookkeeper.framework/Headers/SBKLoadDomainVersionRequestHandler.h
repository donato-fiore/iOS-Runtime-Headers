// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKLOADDOMAINVERSIONREQUESTHANDLER_H
#define SBKLOADDOMAINVERSIONREQUESTHANDLER_H

@class NSString;
@protocol SBKSyncTransactionProcessing;


#import "SBKSyncRequestHandler.h"
#import "SBKSyncTransaction.h"

@interface SBKLoadDomainVersionRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger itemCount; // ivar: _itemCount
@property (nonatomic) BOOL loadsRemoteItemCount; // ivar: _loadsRemoteItemCount
@property (copy, nonatomic) NSString *responseDomainVersion;
@property (readonly, nonatomic) NSUInteger responseItemCount; // ivar: _responseItemCount
@property (readonly) Class superclass;
@property (retain, nonatomic) SBKSyncTransaction *transaction; // ivar: _transaction


+(NSInteger)conflictDetectionType;
-(void)runWithCompletionHandler:(id)arg0 ;


@end


#endif