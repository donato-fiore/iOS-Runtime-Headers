// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNTUCALLPROVIDERMANAGER_H
#define CNTUCALLPROVIDERMANAGER_H

@class TUCallProviderManager, NSString;
@protocol CNTUCallProviderManager;

#import <Foundation/Foundation.h>


@interface CNTUCallProviderManager : NSObject <CNTUCallProviderManager>



@property (copy, nonatomic) TUCallProviderManager *callProviderManager; // ivar: _callProviderManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isActionType:(id)arg0 supportedByProvider:(id)arg1 ;
-(BOOL)isFirstPartyCallProvider:(id)arg0 ;
-(id)init;
-(id)observableForCallProvidersChangedWithSchedulerProvider:(id)arg0 ;
-(id)providerManagerQueue;
-(id)thirdPartyCallProviderWithBundleIdentifier:(id)arg0 ;
-(id)thirdPartyCallProvidersForActionType:(id)arg0 ;


@end


#endif