// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSHAREDSUMMARYCLOUDSYNCMANAGER_H
#define HKSHAREDSUMMARYCLOUDSYNCMANAGER_H

@class NSString;
@protocol _HKXPCExportable, HKSharedSummaryCloudSyncManagerClientInterface;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKSharedSummaryCloudSyncManager : NSObject <_HKXPCExportable, HKSharedSummaryCloudSyncManagerClientInterface>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)fetchAccountInfoWithCompletion:(id)arg0 ;
-(void)pullWithCompletion:(id)arg0 ;
-(void)pushWithCompletion:(id)arg0 ;


@end


#endif