// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMGAMECONTROLLEREVENT_H
#define BMGAMECONTROLLEREVENT_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMGameControllerEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isControllerConnected; // ivar: _isControllerConnected
@property (nonatomic) NSUInteger numberOfControllersConnected; // ivar: _numberOfControllersConnected
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithIsControllerConnected:(BOOL)arg0 numberOfControllersConnected:(NSUInteger)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif