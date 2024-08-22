// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCECHANGE_H
#define CKTRANSACTIONALCOMPONENTDATASOURCECHANGE_H


#import <Foundation/Foundation.h>

#import "CKTransactionalComponentDataSourceAppliedChanges.h"
#import "CKTransactionalComponentDataSourceState.h"

@interface CKTransactionalComponentDataSourceChange : NSObject

@property (readonly, nonatomic) CKTransactionalComponentDataSourceAppliedChanges *appliedChanges; // ivar: _appliedChanges
@property (readonly, nonatomic) CKTransactionalComponentDataSourceState *state; // ivar: _state


-(id)initWithState:(id)arg0 appliedChanges:(id)arg1 ;


@end


#endif