// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSSAUDIODATAWRAPPER_H
#define SFSSAUDIODATAWRAPPER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SFSSAudioDataWrapper : NSObject

@property (weak, nonatomic) NSArray *audioChunks; // ivar: _audioChunks
@property (nonatomic) NSInteger index; // ivar: _index


-(id)initWithAudioChunks:(id)arg0 ;


@end


#endif