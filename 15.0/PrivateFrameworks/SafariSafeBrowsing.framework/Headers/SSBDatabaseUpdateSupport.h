// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSBDATABASEUPDATESUPPORT_H
#define SSBDATABASEUPDATESUPPORT_H

@class CTCarrierSpaceClient;

#import <Foundation/Foundation.h>


@interface SSBDatabaseUpdateSupport : NSObject {
    CTCarrierSpaceClient *_carrierSpaceClient;
}


@property (readonly, nonatomic) BOOL onHighCellularDataPlan; // ivar: _onHighCellularDataPlan


-(id)fetchCellularDataPlanSynchronously;
-(id)init;
-(void)_fetchCellularDataPlan;
-(void)_fetchCellularDataPlanWithCompletionHandler:(id)arg0 ;


@end


#endif