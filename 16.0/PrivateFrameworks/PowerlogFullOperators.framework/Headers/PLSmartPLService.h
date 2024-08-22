// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSMARTPLSERVICE_H
#define PLSMARTPLSERVICE_H

@class PLService, NSMutableDictionary;



@interface PLSmartPLService : PLService

@property (retain) NSMutableDictionary *smartPLHelpers; // ivar: _smartPLHelpers


+(id)defaults;
+(id)entryEventPointDefinitionSample;
+(id)entryEventPointDefinitionSmartTrigger;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)logEventPointHeap;
-(void)logEventPointHeapForProcessName:(id)arg0 ;
-(void)logEventPointSample;
-(void)logEventPointSampleForProcessName:(id)arg0 ;
-(void)logEventPointSmartPLFiredFromAuxilary:(Class)arg0 withReason:(id)arg1 ;
-(void)logEventPointStackShot;
-(void)logEventPointStackShotWithReason:(id)arg0 ;
-(void)logEventPointVMMap;
-(void)logEventPointVMMapForProcessName:(id)arg0 ;
-(void)vmmapProcessName:(id)arg0 ;


@end


#endif