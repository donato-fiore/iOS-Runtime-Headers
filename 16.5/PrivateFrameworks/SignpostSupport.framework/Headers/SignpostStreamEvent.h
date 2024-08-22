// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSTREAMEVENT_H
#define SIGNPOSTSTREAMEVENT_H

@protocol OS_dispatch_source;


#import "SignpostEvent.h"

@interface SignpostStreamEvent : SignpostEvent

@property (nonatomic) NSUInteger _totalFrameCount; // ivar: _totalFrameCount
@property (nonatomic) NSUInteger serialNumber; // ivar: _serialNumber
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // ivar: _timeoutSource


+(id)serializationTypeNumber;
-(BOOL)_hasTotalFrames;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg0 shouldRedact:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif