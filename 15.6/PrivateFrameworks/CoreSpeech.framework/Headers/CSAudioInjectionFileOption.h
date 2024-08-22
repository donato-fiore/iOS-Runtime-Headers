// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOINJECTIONFILEOPTION_H
#define CSAUDIOINJECTIONFILEOPTION_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface CSAudioInjectionFileOption : NSObject

@property (readonly, nonatomic) NSURL *audioURL; // ivar: _audioURL
@property (nonatomic) *OpaqueExtAudioFile fFile; // ivar: _fFile
@property (nonatomic) AudioStreamBasicDescription outASBD; // ivar: _outASBD
@property (readonly, nonatomic) float scaleFactor; // ivar: _scaleFactor


-(id)description;
-(id)initWithAudioURL:(id)arg0 withScaleFactor:(float)arg1 outASBD:(struct AudioStreamBasicDescription )arg2 ;


@end


#endif