// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEALTHRECORDSACCOUNTINFOSTORE_H
#define HKHEALTHRECORDSACCOUNTINFOSTORE_H

@class NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"

@interface HKHealthRecordsAccountInfoStore : NSObject <_HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)determineMedicalRecordsAccountInfoStatusWithCompletion:(id)arg0 ;


@end


#endif