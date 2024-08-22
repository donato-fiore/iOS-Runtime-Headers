// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCELISTENERANNOUNCER_H
#define CKTRANSACTIONALCOMPONENTDATASOURCELISTENERANNOUNCER_H

@protocol CKTransactionalComponentDataSourceListener;


#import "CKComponentAnnouncerBase.h"

@interface CKTransactionalComponentDataSourceListenerAnnouncer : CKComponentAnnouncerBase <CKTransactionalComponentDataSourceListener>





-(void)addListener:(id)arg0 ;
-(void)removeListener:(id)arg0 ;
-(void)transactionalComponentDataSource:(id)arg0 didModifyPreviousState:(id)arg1 byApplyingChanges:(id)arg2 ;


@end


#endif