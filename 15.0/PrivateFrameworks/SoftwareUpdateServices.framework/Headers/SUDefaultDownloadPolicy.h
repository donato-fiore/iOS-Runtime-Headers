// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUDEFAULTDOWNLOADPOLICY_H
#define SUDEFAULTDOWNLOADPOLICY_H

@class NSString;
@protocol SUDownloadPolicy;

#import <Foundation/Foundation.h>

#import "SUCarrierDownloadPolicyProperties.h"
#import "SUDescriptor.h"
#import "SUNetworkMonitor.h"

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy>



@property (retain, nonatomic) SUCarrierDownloadPolicyProperties *carrierPolicy; // ivar: _carrierPolicy
@property (nonatomic, getter=isCellularCapable) BOOL cellularCapable; // ivar: _cellularCapable
@property (nonatomic) int cellularFeeAgreementStatus; // ivar: _cellularFeeAgreementStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SUDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SUNetworkMonitor *networkMonitor; // ivar: _networkMonitor
@property (readonly) Class superclass;


-(BOOL)_inexpensiveHDM;
-(BOOL)_isDownloadableForNetworkType:(int)arg0 error:(*NSInteger)arg1 cellularFeesApply:(*BOOL)arg2 powerRequired:(*BOOL)arg3 ;
-(BOOL)allowExpensiveNetwork;
-(BOOL)cellularDownloadFeesApply;
-(BOOL)hasEnoughDiskSpace;
-(BOOL)is5GDownloadAllowed;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isDownloadAllowableForCellular2G;
-(BOOL)isDownloadAllowableForCellularIncludingInexpensiveHDM:(BOOL)arg0 ;
-(BOOL)isDownloadAllowableForCellularRoaming;
-(BOOL)isDownloadAllowableForWiFi;
-(BOOL)isDownloadFreeForCellular;
-(BOOL)isDownloadable;
-(BOOL)isDownloadableForCurrentNetworkConditions:(*NSInteger)arg0 cellularFeesApply:(*BOOL)arg1 ;
-(BOOL)isDownloadableForCurrentNetworkConditions:(*NSInteger)arg0 cellularFeesApply:(*BOOL)arg1 powerRequired:(*BOOL)arg2 ;
-(BOOL)isPowerRequired;
-(BOOL)isSamePolicy:(id)arg0 ;
-(NSUInteger)wifiOnlyPeriodInDays;
-(id)_stringForBool:(BOOL)arg0 ;
-(id)initWithDescriptor:(id)arg0 ;
-(void)dealloc;


@end


#endif