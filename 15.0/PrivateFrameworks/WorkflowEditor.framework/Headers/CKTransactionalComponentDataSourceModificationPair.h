// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCEMODIFICATIONPAIR_H
#define CKTRANSACTIONALCOMPONENTDATASOURCEMODIFICATIONPAIR_H

@protocol CKTransactionalComponentDataSourceStateModifying;

#import <Foundation/Foundation.h>

#import "CKTransactionalComponentDataSourceState.h"

@interface CKTransactionalComponentDataSourceModificationPair : NSObject

@property (readonly, nonatomic) NSObject<CKTransactionalComponentDataSourceStateModifying> *modification; // ivar: _modification
@property (readonly, nonatomic) CKTransactionalComponentDataSourceState *state; // ivar: _state


-(id)initWithModification:(id)arg0 state:(id)arg1 ;


@end


#endif