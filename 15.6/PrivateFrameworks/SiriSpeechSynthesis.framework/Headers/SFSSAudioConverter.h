// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSSAUDIOCONVERTER_H
#define SFSSAUDIOCONVERTER_H


#import <Foundation/Foundation.h>


@interface SFSSAudioConverter : NSObject {
    *OpaqueAudioConverter _decoder;
    AudioStreamBasicDescription _srcAsbd;
    AudioStreamBasicDescription _dstAsbd;
}




+(BOOL)isAsbdSameAs:(struct AudioStreamBasicDescription )arg0 dstAsbd:(struct AudioStreamBasicDescription )arg1 ;
+(id)sharedInstance;
-(id)convertChunks:(id)arg0 srcAsbd:(struct AudioStreamBasicDescription )arg1 dstAsbd:(struct AudioStreamBasicDescription )arg2 outError:(*id)arg3 ;
-(id)createAudioConverter:(struct AudioStreamBasicDescription )arg0 dstAsbd:(struct AudioStreamBasicDescription )arg1 ;
-(void)dealloc;
-(void)reset;


@end


#endif