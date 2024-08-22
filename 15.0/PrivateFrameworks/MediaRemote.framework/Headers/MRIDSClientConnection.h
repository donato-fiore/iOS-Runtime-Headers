// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRIDSCLIENTCONNECTION_H
#define MRIDSCLIENTCONNECTION_H



#import "MRProtocolClientConnection.h"

@interface MRIDSClientConnection : MRProtocolClientConnection

@property (nonatomic) unsigned int discoveryMode; // ivar: _discoveryMode


-(id)initWithConnection:(id)arg0 ;


@end


#endif