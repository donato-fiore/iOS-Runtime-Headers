// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2TRANSPORTCLIENT_H
#define NEIKEV2TRANSPORTCLIENT_H

@protocol NEIKEv2TransportDelegate;

#import <Foundation/Foundation.h>

#import "NEIKEv2IKESPI.h"

@interface NEIKEv2TransportClient : NSObject

@property (retain) NEIKEv2IKESPI *clientSPI; // ivar: _clientSPI
@property (weak) NSObject<NEIKEv2TransportDelegate> *delegate; // ivar: _delegate
@property BOOL wildcard; // ivar: _wildcard


-(id)description;


@end


#endif