// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRSETLISTENINGMODEMESSAGE_H
#define MRSETLISTENINGMODEMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRSetListeningModeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *listeningMode; // ivar: _listeningMode
@property (readonly, nonatomic) NSString *outputDeviceUID; // ivar: _outputDeviceUID


-(NSUInteger)type;
-(id)initWithListeningMode:(id)arg0 outputDeviceUID:(id)arg1 ;
-(id)initWithUnderlyingCodableMessage:(id)arg0 error:(id)arg1 ;


@end


#endif