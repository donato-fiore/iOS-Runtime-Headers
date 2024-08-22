// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFHCESESSION_H
#define NFHCESESSION_H

@class NSString;
@protocol NFHostEmulationSessionCallbacks, NFHCESessionDelegate;


#import "NFSession.h"

@interface NFHCESession : NFSession <NFHostEmulationSessionCallbacks>

 {
    id<NFHCESessionDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property NSObject<NFHCESessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)readAPDU:(*id)arg0 ;
-(id)sendAPDU:(id)arg0 ;
-(id)startEmulation;
-(id)stopEmulation;
-(void)didConnectToReader;
-(void)didDisconnectFromReader;
-(void)didEndUnexpectedly;
-(void)didReceiveAPDU:(id)arg0 ;
-(void)endSession;
-(void)readAPDUWithCompletion:(id)arg0 ;


@end


#endif