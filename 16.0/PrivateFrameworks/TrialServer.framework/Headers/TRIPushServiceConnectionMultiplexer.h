// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPUSHSERVICECONNECTIONMULTIPLEXER_H
#define TRIPUSHSERVICECONNECTIONMULTIPLEXER_H

@class NSString;
@protocol TRIPushServiceConnectionMultiplexing, TRIPushServiceConnectionCreating, TRIPushServiceChannelSubscribing, TRIPushServiceConnectionDelegate;

#import <Foundation/Foundation.h>


@interface TRIPushServiceConnectionMultiplexer : NSObject <TRIPushServiceConnectionMultiplexing>



@property (readonly, nonatomic) NSObject<TRIPushServiceConnectionCreating> *connectionCreator; // ivar: _connectionCreator
@property (readonly, nonatomic) NSObject<TRIPushServiceChannelSubscribing> *currentConnection; // ivar: _currentConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<TRIPushServiceConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isTestingIdentifier:(id)arg0 ;
-(id)_expectedChannelIdsForDeployments:(id)arg0 experimentIds:(id)arg1 maxChannelsAllowed:(NSUInteger)arg2 ;
-(id)initWithConnectionCreator:(id)arg0 connectionDelegate:(id)arg1 ;
-(id)initWithServerContext:(id)arg0 taskQueue:(id)arg1 ;
-(void)_logFaultIfNotTestingIdentifier:(id)arg0 ;
-(void)ensureSubscriptionsExistOnlyForRolloutDeployments:(id)arg0 experimentIds:(id)arg1 maxChannelsAllowed:(NSUInteger)arg2 ;
-(void)subscribeForExperimentId:(id)arg0 ;
-(void)subscribeForRolloutDeployment:(id)arg0 ;
-(void)switchToEnvironment:(unsigned char)arg0 ;
-(void)unsubscribeForExperimentId:(id)arg0 ;


@end


#endif