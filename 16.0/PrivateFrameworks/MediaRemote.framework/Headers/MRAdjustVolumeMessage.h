// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRADJUSTVOLUMEMESSAGE_H
#define MRADJUSTVOLUMEMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRAdjustVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSInteger adjustment;
@property (readonly, nonatomic) NSString *outputDeviceUID;


-(NSUInteger)type;
-(id)initWithAdjustment:(NSInteger)arg0 outputDeviceUID:(id)arg1 ;


@end


#endif