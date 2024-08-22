// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2TRANSPORTCLIENT_H
#define NEIKEV2TRANSPORTCLIENT_H

@protocol NEIKEv2TransportDelegate;

#import <Foundation/Foundation.h>

#import "NEIKEv2IKESPI.h"

@interface NEIKEv2TransportClient : NSObject {
    BOOL _wildcard;
    NEIKEv2IKESPI *_clientSPI;
    NEIKEv2IKESPI *_remoteSPI;
    id<NEIKEv2TransportDelegate> *_delegate;
}




-(id)description;


@end


#endif