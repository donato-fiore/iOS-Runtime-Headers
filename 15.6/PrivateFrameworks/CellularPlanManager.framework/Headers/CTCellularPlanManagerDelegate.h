// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCELLULARPLANMANAGERDELEGATE_H
#define CTCELLULARPLANMANAGERDELEGATE_H

@class NSString;
@protocol CTCellularPlanClientDelegate;

#import <Foundation/Foundation.h>


@interface CTCellularPlanManagerDelegate : NSObject <CTCellularPlanClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)carrierInfoDidUpdate;
-(void)localPlanInfoDidUpdate:(id)arg0 ;
-(void)pendingTransferPlanInfoDidUpdate;
-(void)planInfoDidUpdate;
-(void)remoteProvisioningDidBecomeAvailable;


@end


#endif