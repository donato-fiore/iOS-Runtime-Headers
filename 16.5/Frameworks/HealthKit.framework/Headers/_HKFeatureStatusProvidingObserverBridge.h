// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKFEATURESTATUSPROVIDINGOBSERVERBRIDGE_H
#define _HKFEATURESTATUSPROVIDINGOBSERVERBRIDGE_H

@class NSString;
@protocol HKFeatureStatusProvidingObserver;

#import <Foundation/Foundation.h>

#import "HKFeatureIdentifierAndContext.h"
#import "HKObserverBridgeHandle.h"

@interface _HKFeatureStatusProvidingObserverBridge : NSObject <HKFeatureStatusProvidingObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKFeatureIdentifierAndContext *featureIdentifierAndContext; // ivar: _featureIdentifierAndContext
@property (readonly, nonatomic) HKObserverBridgeHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFeatureIdentifierAndContext:(id)arg0 handle:(id)arg1 ;
-(void)featureStatusProviding:(id)arg0 didUpdateFeatureStatus:(id)arg1 ;


@end


#endif