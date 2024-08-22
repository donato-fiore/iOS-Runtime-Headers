// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPNFCREADERNOTIFICATION_H
#define HAPNFCREADERNOTIFICATION_H

@class HMFObject;
@protocol HAPNFCReaderStream;


#import "HAPNFCReaderXPC.h"

@interface HAPNFCReaderNotification : HMFObject <HAPNFCReaderStream>



@property (retain) HAPNFCReaderXPC *nfcHomeKit; // ivar: _nfcHomeKit
@property (retain) HAPNFCReaderXPC *tagProxCard; // ivar: _tagProxCard


+(void)start;
-(BOOL)_supportsBackgroundReading;
-(id)_initializeNFCStream:(id)arg0 withSource:(NSUInteger)arg1 workQueue:(id)arg2 ;
-(id)init;
-(id)setupNotificationDictionaryWithNFCData:(id)arg0 ;
-(void)_initializeHomeKitNFCStreamWithQueue:(id)arg0 ;
-(void)_initializeProxCardStreamWithQueue:(id)arg0 ;
-(void)_sendHomeNotificationForSource:(NSUInteger)arg0 withDictionary:(id)arg1 ;
-(void)nfcStreamIndicationFromSource:(NSUInteger)arg0 withPayload:(id)arg1 ;


@end


#endif