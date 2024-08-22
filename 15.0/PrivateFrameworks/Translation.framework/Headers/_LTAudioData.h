// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTAUDIODATA_H
#define _LTAUDIODATA_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _LTAudioData : NSObject {
    NSData *_data;
}


@property (readonly, nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (readonly, nonatomic) NSInteger packetCount; // ivar: _packetCount
@property (readonly, nonatomic) NSData *packetDescriptions; // ivar: _packetDescriptions
@property (readonly, nonatomic) NSData *rawData; // ivar: _rawData


-(BOOL)_populateWithOpusData:(id)arg0 ;
-(id)initWithASBD:(struct AudioStreamBasicDescription )arg0 rawData:(id)arg1 ;
-(void)writeToURL:(id)arg0 ;


@end


#endif