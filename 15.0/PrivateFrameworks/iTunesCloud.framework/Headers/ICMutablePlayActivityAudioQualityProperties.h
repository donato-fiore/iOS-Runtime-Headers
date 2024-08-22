// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUTABLEPLAYACTIVITYAUDIOQUALITYPROPERTIES_H
#define ICMUTABLEPLAYACTIVITYAUDIOQUALITYPROPERTIES_H

@class NSString;


#import "ICPlayActivityAudioQualityProperties.h"

@interface ICMutablePlayActivityAudioQualityProperties : ICPlayActivityAudioQualityProperties

@property (nonatomic) NSInteger bitDepth;
@property (nonatomic) NSInteger bitRate;
@property (nonatomic) NSString *channelLayoutDescription;
@property (nonatomic) unsigned int codec;
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic, getter=isSpatialized) BOOL spatialized;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif