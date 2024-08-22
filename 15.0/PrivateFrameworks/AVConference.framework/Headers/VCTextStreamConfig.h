// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCTEXTSTREAMCONFIG_H
#define VCTEXTSTREAMCONFIG_H



#import "VCMediaStreamConfig.h"

@interface VCTextStreamConfig : VCMediaStreamConfig

@property (nonatomic) unsigned char numRedundantPayloads; // ivar: _numRedundantPayloads
@property (readonly, nonatomic, getter=isRedEnabled) BOOL redEnabled; // ivar: _redEnabled
@property (nonatomic) float txIntervalMin; // ivar: _txIntervalMin


-(BOOL)setupCodecWithClientDictionary:(id)arg0 ;
-(id)initWithClientDictionary:(id)arg0 ;


@end


#endif