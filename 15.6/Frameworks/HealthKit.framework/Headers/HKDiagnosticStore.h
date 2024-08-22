// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDIAGNOSTICSTORE_H
#define HKDIAGNOSTICSTORE_H

@class NSString;
@protocol _HKXPCExportable, HKDiagnosticStoreClient;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKDiagnosticStore : NSObject <_HKXPCExportable, HKDiagnosticStoreClient>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)fetchDiagnosticsForKeys:(id)arg0 completion:(id)arg1 ;
-(void)fetchURLForAnalyticsFileWithName:(id)arg0 completion:(id)arg1 ;


@end


#endif