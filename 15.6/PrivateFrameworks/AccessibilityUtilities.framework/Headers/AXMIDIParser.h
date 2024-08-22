// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMIDIPARSER_H
#define AXMIDIPARSER_H


#import <Foundation/Foundation.h>


@interface AXMIDIParser : NSObject



-(NSInteger)_eventTypeForStatusByte:(unsigned char)arg0 ;
-(NSUInteger)_expectedPacketLengthForEventType:(NSInteger)arg0 ;
-(id)parse:(struct MIDIPacketList *)arg0 error:(*id)arg1 ;
-(unsigned short)_channelForStatusByte:(unsigned char)arg0 ;


@end


#endif