// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HVXPCINTERNALSERVICE_H
#define HVXPCINTERNALSERVICE_H

@class _PASXPCClientHelper;

#import <Foundation/Foundation.h>


@interface HVXPCInternalService : NSObject {
    _PASXPCClientHelper *_helper;
}




-(BOOL)contentAvailableFromSources:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)deleteContentWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)disableConsumptionOfDataSources:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)donateSearchableItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)enableConsumptionOfDataSources:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)harvestWithError:(*id)arg0 ;
-(BOOL)overrideIsConnectedToPower:(id)arg0 error:(*id)arg1 ;
-(BOOL)refillHarvestBudgetWithError:(*id)arg0 ;
-(BOOL)restoreConsumptionOfDataSources:(unsigned int)arg0 error:(*id)arg1 ;
-(id)init;
-(id)statsWithError:(*id)arg0 ;
-(id)synchronousProxy;


@end


#endif