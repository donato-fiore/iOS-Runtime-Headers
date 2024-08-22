// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAUDIOREDBUILDER_H
#define VCAUDIOREDBUILDER_H

@class NSPointerArray;

#import <Foundation/Foundation.h>


@interface VCAudioRedBuilder : NSObject {
    unsigned int _sampleRate;
    unsigned int _samplesPerFrame;
    BOOL _includeSequenceOffset;
    tagVCAudioRedPayload _latestPrimaryPayload;
    NSPointerArray *_selectedRedPayloads;
    tagVCAudioRedPayload _redPayloadToSend;
    unsigned char _redPayloadBufferToSend;
    tagVCAudioRedPayload _payloadHistory;
    unsigned int _payloadHistoryCount;
    char * _payloadBufferHistory;
    int _payloadBufferHistoryIndex;
}


@property (nonatomic) unsigned int maxDelay; // ivar: _maxDelay
@property (nonatomic) unsigned int numPayloads; // ivar: _numPayloads
@property (readonly, nonatomic) int redPayloadType; // ivar: _redPayloadType


+(unsigned int)redOverheadForNumPayloads:(unsigned int)arg0 ;
-(BOOL)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload *)arg0 forTimestamp:(unsigned int)arg1 ;
-(BOOL)redundantPayloads:(id)arg0 containsPointer:(*void)arg1 ;
-(char *)resetOutputPayload:(struct tagVCAudioRedPayload *)arg0 ;
-(id)initWithRedPayloadType:(int)arg0 sampleRate:(unsigned int)arg1 samplesPerFrame:(unsigned int)arg2 numPayloads:(unsigned int)arg3 maxDelay:(unsigned int)arg4 includeSequenceOffset:(BOOL)arg5 ;
-(id)payloadHistoryDescription;
-(id)redPayloadDescription:(struct tagVCAudioRedPayload *)arg0 ;
-(id)redundantPayloadsDescription:(id)arg0 ;
-(id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload *)arg0 ;
-(struct tagVCAudioRedPayload *)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload *)arg0 redPayloads:(id)arg1 ;
-(struct tagVCAudioRedPayload *)getPrimaryPayloadWithBuffer:(char *)arg0 length:(int)arg1 payloadType:(int)arg2 timestamp:(unsigned int)arg3 priority:(unsigned char)arg4 ;
-(struct tagVCAudioRedPayload *)nearestRedPayloadForTimestamp:(unsigned int)arg0 ;
-(struct tagVCAudioRedPayload *)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload *)arg0 ;
-(unsigned int)timestampOffsetForBlocks:(int)arg0 ;
-(void)dealloc;
-(void)updatePayloadHistory:(struct tagVCAudioRedPayload *)arg0 ;


@end


#endif