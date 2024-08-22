// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNSYSTEMCONFIGURATION_H
#define SNSYSTEMCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface SNSystemConfiguration : NSObject

@property (nonatomic) unsigned int channelCount; // ivar: _channelCount
@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSampleRate:(CGFloat)arg0 channelCount:(unsigned int)arg1 ;


@end


#endif