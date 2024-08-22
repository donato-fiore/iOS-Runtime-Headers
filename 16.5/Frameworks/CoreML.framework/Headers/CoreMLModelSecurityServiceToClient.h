// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREMLMODELSECURITYSERVICETOCLIENT_H
#define COREMLMODELSECURITYSERVICETOCLIENT_H

@class NSCountedSet, NSMutableDictionary;
@protocol CoreMLModelSecurityServiceToClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CoreMLModelSecurityServiceToClient : NSObject <CoreMLModelSecurityServiceToClientProtocol>



@property (retain, nonatomic) NSCountedSet *featureProviderCount; // ivar: _featureProviderCount
@property (retain, nonatomic) NSMutableDictionary *featureProviderMap; // ivar: _featureProviderMap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceToClientQueue; // ivar: _serviceToClientQueue


-(id)init;
-(void)clientFeatureNames:(id)arg0 withReply:(id)arg1 ;
-(void)clientFeatureValueForName:(id)arg0 uniqueKeyForProvider:(id)arg1 withReply:(id)arg2 ;


@end


#endif