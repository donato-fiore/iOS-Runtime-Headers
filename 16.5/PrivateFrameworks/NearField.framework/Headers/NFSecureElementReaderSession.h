// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFSECUREELEMENTREADERSESSION_H
#define NFSECUREELEMENTREADERSESSION_H

@protocol NFSecureElementReaderSessionDelegate;


#import "NFSession.h"

@interface NFSecureElementReaderSession : NFSession

@property (weak) NSObject<NFSecureElementReaderSessionDelegate> *delegate; // ivar: _delegate


-(BOOL)connectTag:(id)arg0 error:(*id)arg1 ;
-(BOOL)disconnectTag:(*id)arg0 ;
-(BOOL)selectApplets:(id)arg0 error:(*id)arg1 ;
-(BOOL)start:(*id)arg0 ;
-(BOOL)startVASPolling:(id)arg0 error:(*id)arg1 ;
-(BOOL)stop:(*id)arg0 ;
-(BOOL)stopVASPolling:(*id)arg0 ;
-(id)performVAS:(id)arg0 error:(*id)arg1 ;
-(id)selectApplets:(id)arg0 ;
-(id)startSecureElementReader;
-(id)stopSecureElementReader;
-(id)transceive:(id)arg0 error:(*id)arg1 ;
-(void)didDetectTags:(id)arg0 ;
-(void)didEndSecureElementReader:(id)arg0 ;
-(void)didEndUnexpectedly;
-(void)didReceiveThermalIndication:(BOOL)arg0 ;
-(void)didStartSecureElementReader:(id)arg0 ;
-(void)receivedSecureElementReaderData:(id)arg0 forApplet:(id)arg1 ;


@end


#endif