// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRSYNCOUTPUTDEVICESMESSAGE_H
#define MRSYNCOUTPUTDEVICESMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"

@interface MRSyncOutputDevicesMessage : MRProtocolMessage {
    NSArray *_outputDevices;
}


@property (readonly, nonatomic) NSArray *outputDevices;


-(NSUInteger)type;
-(id)initWithOutputDevices:(id)arg0 ;


@end


#endif