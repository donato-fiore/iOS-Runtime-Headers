// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUV2BRIDGEBUS_H
#define AUV2BRIDGEBUS_H



#import "AUAudioUnitBus.h"
#import "AUAudioUnitV2Bridge.h"

@interface AUV2BridgeBus : AUAudioUnitBus {
    AUAudioUnitV2Bridge *_owner;
    *OpaqueAudioComponentInstance _audioUnit;
    unsigned int _scope;
    unsigned int _element;
}




-(BOOL)setFormat:(id)arg0 error:(*id)arg1 ;
-(id)format;
-(id)initWithOwner:(id)arg0 au:(struct OpaqueAudioComponentInstance *)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif