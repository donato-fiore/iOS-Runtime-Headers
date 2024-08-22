// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNSYSTEMCONFIGURATION_H
#define SNSYSTEMCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface SNSystemConfiguration : NSObject {
    unsigned int _channelCount;
    CGFloat _sampleRate;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif