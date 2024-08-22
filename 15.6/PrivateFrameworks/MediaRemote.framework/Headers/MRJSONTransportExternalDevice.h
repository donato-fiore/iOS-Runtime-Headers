// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRJSONTRANSPORTEXTERNALDEVICE_H
#define MRJSONTRANSPORTEXTERNALDEVICE_H

@class NSString;
@protocol MRProtocolClientConnectionDelegate;


#import "MRTransportExternalDevice.h"

@interface MRJSONTransportExternalDevice : MRTransportExternalDevice <MRProtocolClientConnectionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isPaired;
-(id)_onWorkerQueue_createClientConnectionWithTransport:(id)arg0 ;
-(void)_handleSetStateMessage:(id)arg0 ;


@end


#endif