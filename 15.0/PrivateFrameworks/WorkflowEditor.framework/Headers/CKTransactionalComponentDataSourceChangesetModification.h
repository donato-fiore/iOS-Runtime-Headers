// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCECHANGESETMODIFICATION_H
#define CKTRANSACTIONALCOMPONENTDATASOURCECHANGESETMODIFICATION_H

@class NSDictionary, NSString;
@protocol CKTransactionalComponentDataSourceStateModifying, CKComponentStateListener;

#import <Foundation/Foundation.h>

#import "CKTransactionalComponentDataSourceChangeset.h"

@interface CKTransactionalComponentDataSourceChangesetModification : NSObject <CKTransactionalComponentDataSourceStateModifying>

 {
    id<CKComponentStateListener> *_stateListener;
    NSDictionary *_userInfo;
}


@property (readonly, nonatomic) CKTransactionalComponentDataSourceChangeset *changeset; // ivar: _changeset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)changeFromState:(id)arg0 ;
-(id)initWithChangeset:(id)arg0 stateListener:(id)arg1 userInfo:(id)arg2 ;


@end


#endif