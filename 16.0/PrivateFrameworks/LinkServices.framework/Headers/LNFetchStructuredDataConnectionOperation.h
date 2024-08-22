// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNFETCHSTRUCTUREDDATACONNECTIONOPERATION_H
#define LNFETCHSTRUCTUREDDATACONNECTIONOPERATION_H

@class NSArray, NSDictionary;


#import "LNConnectionOperation.h"

@interface LNFetchStructuredDataConnectionOperation : LNConnectionOperation

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) NSArray *entityIdentifiers; // ivar: _entityIdentifiers
@property (retain, nonatomic) NSDictionary *entityIdentifiersToStructuredData; // ivar: _entityIdentifiersToStructuredData
@property (readonly, nonatomic) NSInteger typeIdentifier; // ivar: _typeIdentifier


-(id)initWithConnectionInterface:(id)arg0 typeIdentifier:(NSInteger)arg1 entityIdentifiers:(id)arg2 completionHandler:(id)arg3 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif