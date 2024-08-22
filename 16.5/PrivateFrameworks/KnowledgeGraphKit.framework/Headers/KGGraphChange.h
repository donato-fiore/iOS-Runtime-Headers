// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGGRAPHCHANGE_H
#define KGGRAPHCHANGE_H


#import <Foundation/Foundation.h>

#import "KGElementIdentifierSet.h"
#import "KGTransactionToken.h"

@interface KGGraphChange : NSObject

@property (readonly, nonatomic) KGElementIdentifierSet *edgesDeleted; // ivar: _edgesDeleted
@property (readonly, nonatomic) KGElementIdentifierSet *edgesInserted; // ivar: _edgesInserted
@property (readonly, nonatomic) KGElementIdentifierSet *edgesUpdated; // ivar: _edgesUpdated
@property (readonly, nonatomic) KGElementIdentifierSet *nodesDeleted; // ivar: _nodesDeleted
@property (readonly, nonatomic) KGElementIdentifierSet *nodesInserted; // ivar: _nodesInserted
@property (readonly, nonatomic) KGElementIdentifierSet *nodesUpdated; // ivar: _nodesUpdated
@property (readonly, nonatomic) KGTransactionToken *transactionToken; // ivar: _transactionToken


-(id)initWithTransactionToken:(id)arg0 edgesInserted:(id)arg1 edgesUpdated:(id)arg2 edgesDeleted:(id)arg3 ;
-(id)initWithTransactionToken:(id)arg0 nodesInserted:(id)arg1 edgesInserted:(id)arg2 nodesUpdated:(id)arg3 edgesUpdated:(id)arg4 nodesDeleted:(id)arg5 edgesDeleted:(id)arg6 ;
-(id)initWithTransactionToken:(id)arg0 nodesInserted:(id)arg1 nodesUpdated:(id)arg2 nodesDeleted:(id)arg3 ;


@end


#endif