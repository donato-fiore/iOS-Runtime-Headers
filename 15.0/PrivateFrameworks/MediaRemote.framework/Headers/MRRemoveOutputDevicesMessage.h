// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRREMOVEOUTPUTDEVICESMESSAGE_H
#define MRREMOVEOUTPUTDEVICESMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"

@interface MRRemoveOutputDevicesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *outputDeviceUIDs;


-(NSUInteger)type;
-(id)initWithOutputDeviceUIDs:(id)arg0 ;


@end


#endif