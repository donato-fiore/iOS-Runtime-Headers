// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCOUNTRYMONITORCONTROL_H
#define HKCOUNTRYMONITORCONTROL_H

@class NSString;
@protocol _HKXPCExportable, HKCountryMonitorControlClient;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKCountryMonitorControl : NSObject <_HKXPCExportable, HKCountryMonitorControlClient>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
+(void)checkCurrentCountry;
+(void)checkCurrentCountryWithHealthStore:(id)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id)arg0 ;


@end


#endif