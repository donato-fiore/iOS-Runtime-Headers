// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMFNONETWORKALERT_H
#define FMFNONETWORKALERT_H


#import <Foundation/Foundation.h>


@interface FMFNoNetworkAlert : NSObject

@property (nonatomic, getter=isGlobalCellularEnabled) BOOL globalCellularEnabled; // ivar: _globalCellularEnabled


+(BOOL)isAirplaneModeEnabled;
+(NSUInteger)reasonForNoInternet;
+(id)alertInfoForInternetUnavailableReason:(NSUInteger)arg0 ;
+(id)newAlertController;


@end


#endif