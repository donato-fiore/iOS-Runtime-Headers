// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAIRMESSAGEDISPATCHER_H
#define AVAIRMESSAGEDISPATCHER_H

@class NSNetService, NSString;
@protocol AVBonjourServiceClientDelegate, AVAirTransportDelegate, AVAirMessageDispatcherClientDelegate;

#import <Foundation/Foundation.h>

#import "AVBonjourServiceClient.h"
#import "AVAirTransport.h"

@interface AVAirMessageDispatcher : NSObject <AVBonjourServiceClientDelegate, AVAirTransportDelegate>



@property (readonly, nonatomic) AVBonjourServiceClient *bonjourServiceClient; // ivar: _bonjourServiceClient
@property (retain, nonatomic) AVAirTransport *channel; // ivar: _channel
@property (retain, nonatomic) NSNetService *currentNetService; // ivar: _currentNetService
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVAirMessageDispatcherClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL haveAirPlayService;
@property (readonly) Class superclass;


+(BOOL)_isDispatcherEnabled;
+(id)shared;
-(id)init;
-(void)airTransport:(id)arg0 didReceiveObject:(id)arg1 ;
-(void)airTransportInputDidClose:(id)arg0 ;
-(void)airTransportOutputDidOpen:(id)arg0 ;
-(void)didConnectToBonjourService:(id)arg0 channel:(id)arg1 ;
-(void)sendMessage:(id)arg0 completion:(id)arg1 ;


@end


#endif