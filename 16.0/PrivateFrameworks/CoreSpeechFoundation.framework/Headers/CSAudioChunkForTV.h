// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSAUDIOCHUNKFORTV_H
#define CSAUDIOCHUNKFORTV_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CSAudioChunkForTV : NSObject

@property (nonatomic) unsigned int audioFormat; // ivar: _audioFormat
@property (nonatomic) float avgPower; // ivar: _avgPower
@property (nonatomic) unsigned int numChannels; // ivar: _numChannels
@property (retain, nonatomic) NSArray *packets; // ivar: _packets
@property (nonatomic) float peakPower; // ivar: _peakPower
@property (nonatomic) NSUInteger streamHandleID; // ivar: _streamHandleID
@property (nonatomic) NSUInteger timeStamp; // ivar: _timeStamp


-(id)initWithXPCObject:(id)arg0 ;
-(id)xpcObject;


@end


#endif