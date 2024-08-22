// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSDEVICECONNECTION_H
#define IDSDEVICECONNECTION_H

@class NSInputStream, NSDictionary, NSOutputStream;

#import <Foundation/Foundation.h>

#import "_IDSDeviceConnection.h"

@interface IDSDeviceConnection : NSObject {
    _IDSDeviceConnection *_internal;
}


@property (readonly, nonatomic) _IDSDeviceConnection *_internal;
@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSUInteger mtu;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) int socket;


-(BOOL)updateConnectionWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)description;
// -(id)initSocketWithDevice:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 queue:(unk)arg3  ;
// -(id)initStreamWithDevice:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)close;
-(void)dealloc;
-(void)setStreamPairWithInputStream:(id)arg0 outputStream:(id)arg1 ;


@end


#endif