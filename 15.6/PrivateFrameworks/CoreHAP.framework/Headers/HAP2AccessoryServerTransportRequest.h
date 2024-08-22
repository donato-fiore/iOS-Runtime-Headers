// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ACCESSORYSERVERTRANSPORTREQUEST_H
#define HAP2ACCESSORYSERVERTRANSPORTREQUEST_H

@class NSData, NSString;
@protocol HAP2AccessoryServerTransportRequestEndpoint;


#import "HAP2LoggingObject.h"

@interface HAP2AccessoryServerTransportRequest : HAP2LoggingObject {
    NSUInteger _identifier;
}


@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted; // ivar: _encrypted
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerTransportRequestEndpoint> *endpoint; // ivar: _endpoint
@property (readonly, nonatomic, getter=isForReading) BOOL forReading; // ivar: _forReading
@property (readonly, nonatomic, getter=isForWriting) BOOL forWriting;
@property (readonly, nonatomic) NSString *mimeType; // ivar: _mimeType


+(id)new;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initForReadingWithEndpoint:(id)arg0 data:(id)arg1 encrypted:(BOOL)arg2 mimeType:(id)arg3 ;
-(id)initForWritingWithEndpoint:(id)arg0 data:(id)arg1 encrypted:(BOOL)arg2 mimeType:(id)arg3 ;


@end


#endif