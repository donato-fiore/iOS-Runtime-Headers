// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIANEGOTIATORAUDIOCONFIGURATION_H
#define VCMEDIANEGOTIATORAUDIOCONFIGURATION_H

@class NSMutableSet, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VCMediaNegotiatorAudioConfiguration : NSObject <NSCopying>

 {
    NSMutableSet *_secondaryPayloads;
}


@property (nonatomic) BOOL allowAudioRecording; // ivar: _allowAudioRecording
@property (nonatomic) BOOL allowAudioSwitching; // ivar: _allowAudioSwitching
@property (readonly, nonatomic) NSSet *audioPayloads; // ivar: _audioPayloads
@property (nonatomic) unsigned int audioUnitNumber; // ivar: _audioUnitNumber
@property (nonatomic) unsigned int ssrc; // ivar: _ssrc
@property (nonatomic) BOOL useSBR; // ivar: _useSBR


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSecondaryPayload:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAllowAudioSwitching:(BOOL)arg0 allowAudioRecording:(BOOL)arg1 useSBR:(BOOL)arg2 ssrc:(unsigned int)arg3 audioUnitNumber:(unsigned int)arg4 ;
-(id)initWithAllowAudioSwitching:(BOOL)arg0 allowAudioRecording:(BOOL)arg1 useSBR:(BOOL)arg2 ssrc:(unsigned int)arg3 audioUnitNumber:(unsigned int)arg4 audioRuleCollection:(id)arg5 ;
-(void)addAudioPayload:(int)arg0 isSecondary:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif