// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EASESSION_H
#define EASESSION_H

@class NSString, NSInputStream, NSOutputStream;

#import <Foundation/Foundation.h>

#import "EAAccessory.h"

@interface EASession : NSObject {
    unsigned int _sessionID;
    BOOL _openCompleted;
    int _sock;
    BOOL _useSocketInterfaceForEASession;
    NSString *_eaSessionUUIDFromCoreAccessories;
}


@property (readonly, nonatomic) EAAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (readonly, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (readonly, nonatomic) NSString *protocolString; // ivar: _protocolString


-(BOOL)isOpenCompleted;
-(id)EASessionUUID;
-(id)_shortDescription;
-(id)description;
-(id)init;
-(id)initWithAccessory:(id)arg0 forProtocol:(id)arg1 ;
-(unsigned int)_sessionID;
-(void)_endStreams;
-(void)_handleIncomingEAData:(id)arg0 ;
-(void)_streamClosed;
-(void)dealloc;
-(void)setOpenCompleted:(BOOL)arg0 ;


@end


#endif