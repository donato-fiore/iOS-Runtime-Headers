// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFNDEFTAGSESSION_H
#define NFNDEFTAGSESSION_H

@class NSString;
@protocol NFNdefTagSessionCallbacks, NFNdefTagSessionDelegate;


#import "NFSession.h"

@interface NFNdefTagSession : NFSession <NFNdefTagSessionCallbacks>

 {
    id<NFNdefTagSessionDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property NSObject<NFNdefTagSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)generateBluetoothLESecureNdefPayloadWithOOBData:(id)arg0 ;
-(BOOL)enableWrite:(BOOL)arg0 ;
-(BOOL)enableWrite:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setTagData:(id)arg0 ;
-(BOOL)setTagData:(id)arg0 error:(*id)arg1 ;
-(BOOL)setTagMessage:(id)arg0 ;
-(BOOL)setTagMessage:(id)arg0 error:(*id)arg1 ;
-(BOOL)startBluetoothLEPairingWithDeviceAddress:(id)arg0 role:(unsigned char)arg1 optionalOOBData:(id)arg2 ;
-(BOOL)startBluetoothLESecureConnectionWithDeviceAddress:(id)arg0 optionalOOBData:(id)arg1 ;
-(BOOL)startBluetoothLESecureConnectionWithOOBData:(id)arg0 ;
-(BOOL)startEmulation:(id)arg0 ;
-(BOOL)startEmulation:(id)arg0 error:(*id)arg1 ;
-(BOOL)startEmulation:(id)arg0 withMessageType:(unsigned int)arg1 ;
-(BOOL)startEmulation:(id)arg0 withMessageType:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)startEmulationWithNdefMessage:(id)arg0 ;
-(BOOL)startEmulationWithNdefMessage:(id)arg0 error:(*id)arg1 ;
-(BOOL)startEmulationWithNdefMessage:(id)arg0 withMessageType:(unsigned int)arg1 ;
-(BOOL)startEmulationWithNdefMessage:(id)arg0 withMessageType:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)stopEmulation;
-(BOOL)stopEmulationWithError:(*id)arg0 ;
-(id)getTagData;
-(id)getTagDataWithError:(*id)arg0 ;
-(id)getTagMessage;
-(id)getTagMessageWithError:(*id)arg0 ;
-(void)didEndUnexpectedly;
-(void)didTagStateChange:(unsigned int)arg0 ;
-(void)endSession;


@end


#endif