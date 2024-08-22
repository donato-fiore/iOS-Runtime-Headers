// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESSERVICEACCESS_H
#define DESSERVICEACCESS_H


#import <Foundation/Foundation.h>


@interface DESServiceAccess : NSObject



+(BOOL)hasMLRCtlEntitlement:(id)arg0 ;
+(BOOL)hasOnDemandLaunchEntitlement:(id)arg0 ;
+(BOOL)hasRecordAccessToBundleId:(id)arg0 connection:(id)arg1 error:(*id)arg2 ;
+(BOOL)hasToolEntitlement:(id)arg0 ;


@end


#endif