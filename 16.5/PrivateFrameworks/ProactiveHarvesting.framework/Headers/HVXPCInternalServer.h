// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HVXPCINTERNALSERVER_H
#define HVXPCINTERNALSERVER_H

@protocol HVXPCInternalServiceProtocol;

#import <Foundation/Foundation.h>


@interface HVXPCInternalServer : NSObject <HVXPCInternalServiceProtocol>





-(void)contentAvailableFromSources:(unsigned int)arg0 completion:(id)arg1 ;
-(void)deleteContentWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)disableConsumptionOfDataSources:(unsigned int)arg0 completion:(id)arg1 ;
-(void)donateSearchableItem:(id)arg0 completion:(id)arg1 ;
-(void)enableConsumptionOfDataSources:(unsigned int)arg0 completion:(id)arg1 ;
-(void)harvestWithCompletion:(id)arg0 ;
-(void)overrideIsConnectedToPower:(id)arg0 completion:(id)arg1 ;
-(void)refillHarvestBudgetWithCompletion:(id)arg0 ;
-(void)restoreConsumptionOfDataSources:(unsigned int)arg0 completion:(id)arg1 ;
-(void)statsWithCompletion:(id)arg0 ;


@end


#endif