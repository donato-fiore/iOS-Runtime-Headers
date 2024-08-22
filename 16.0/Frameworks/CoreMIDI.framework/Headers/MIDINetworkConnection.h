// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIDINETWORKCONNECTION_H
#define MIDINETWORKCONNECTION_H


#import <Foundation/Foundation.h>

#import "MIDINetworkHost.h"

@interface MIDINetworkConnection : NSObject {
    *void _imp;
}


@property (readonly, nonatomic) MIDINetworkHost *host;


+(id)connectionWithHost:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif