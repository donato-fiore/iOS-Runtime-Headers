// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSCDYNAMICSTOREAGENT_H
#define PLSCDYNAMICSTOREAGENT_H

@class PLAgent;



@interface PLSCDynamicStoreAgent : PLAgent



+(id)accountingGroupDefinitions;
+(id)defaults;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(id)railDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)networkLinkQualityChanged:(struct __SCDynamicStore *)arg0 withChangedKeys:(id)arg1 ;


@end


#endif