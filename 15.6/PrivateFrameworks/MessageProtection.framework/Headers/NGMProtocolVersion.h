// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NGMPROTOCOLVERSION_H
#define NGMPROTOCOLVERSION_H


#import <Foundation/Foundation.h>


@interface NGMProtocolVersion : NSObject



+(BOOL)isVersionSupported:(unsigned int)arg0 ;
+(unsigned int)supportedVersion;


@end


#endif