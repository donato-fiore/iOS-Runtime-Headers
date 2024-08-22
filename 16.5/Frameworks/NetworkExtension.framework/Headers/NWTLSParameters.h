// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWTLSPARAMETERS_H
#define NWTLSPARAMETERS_H

@class NSSet, NSData;

#import <Foundation/Foundation.h>


@interface NWTLSParameters : NSObject

@property (copy) NSSet *SSLCipherSuites; // ivar: _SSLCipherSuites
@property (copy) NSData *TLSSessionID; // ivar: _TLSSessionID
@property NSUInteger maximumSSLProtocolVersion; // ivar: _maximumSSLProtocolVersion
@property NSUInteger minimumSSLProtocolVersion; // ivar: _minimumSSLProtocolVersion




@end


#endif