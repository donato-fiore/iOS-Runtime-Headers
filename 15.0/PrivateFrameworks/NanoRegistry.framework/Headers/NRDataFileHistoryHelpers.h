// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRDATAFILEHISTORYHELPERS_H
#define NRDATAFILEHISTORYHELPERS_H


#import <Foundation/Foundation.h>


@interface NRDataFileHistoryHelpers : NSObject



+(BOOL)archiveDeviceHistory:(id)arg0 ;
+(BOOL)archiveSecureProperties:(id)arg0 ;
+(BOOL)createMissingDates:(id)arg0 ;
+(id)unarchiveDeviceHistory;
+(id)unarchiveSecureProperties;


@end


#endif