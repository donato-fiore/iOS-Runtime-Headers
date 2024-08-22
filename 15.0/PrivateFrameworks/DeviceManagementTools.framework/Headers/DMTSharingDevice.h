// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMTSHARINGDEVICE_H
#define DMTSHARINGDEVICE_H

@class CATSharingDevice, SFDevice;



@interface DMTSharingDevice : CATSharingDevice

@property (readonly, nonatomic) SFDevice *sharingDevice; // ivar: _sharingDevice


+(BOOL)deviceIsPairedAccordingToFlags:(unsigned int)arg0 ;
+(NSUInteger)devicePairingStateFromSFPairState:(unsigned int)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)underlyingDevice;


@end


#endif