// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLNETWORKOPTIONS_H
#define _MLNETWORKOPTIONS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _MLNetworkOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *networkOptions; // ivar: _networkOptions
@property (readonly, nonatomic) NSInteger receiveTimeout; // ivar: _receiveTimeout


-(BOOL)useAWDL;
-(BOOL)useBonjour;
-(BOOL)useTLS;
-(BOOL)useUDP;
-(NSUInteger)family;
-(char *)localAddr;
-(char *)localPort;
-(char *)networkNameIdentifier;
-(char *)port;
-(char *)psk;
-(id)initWithOptions:(id)arg0 ;


@end


#endif