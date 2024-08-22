// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLTAUDIOINFO_H
#define AXLTAUDIOINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AXLTAudioInfo : NSObject

@property (retain, nonatomic) NSArray *audioHistogram; // ivar: _audioHistogram
@property (nonatomic) int pid; // ivar: _pid
@property (nonatomic) NSInteger requestType; // ivar: _requestType


-(id)initWithAudioInfo:(id)arg0 requestType:(NSInteger)arg1 pid:(int)arg2 ;


@end


#endif