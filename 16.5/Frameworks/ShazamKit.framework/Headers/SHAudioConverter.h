// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHAUDIOCONVERTER_H
#define SHAUDIOCONVERTER_H

@class AVAudioConverter;

#import <Foundation/Foundation.h>


@interface SHAudioConverter : NSObject

@property (retain, nonatomic) AVAudioConverter *converter; // ivar: _converter


-(id)audioConverterWithInputFormat:(id)arg0 outputFormat:(id)arg1 ;
-(id)supportedPCMBufferFromBuffer:(id)arg0 error:(*id)arg1 ;


@end


#endif