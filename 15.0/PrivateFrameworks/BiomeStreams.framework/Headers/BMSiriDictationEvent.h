// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSIRIDICTATIONEVENT_H
#define BMSIRIDICTATIONEVENT_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMSiriDictationEvent : NSObject <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, copy, nonatomic) NSString *correctedText; // ivar: _correctedText
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *recognizedText; // ivar: _recognizedText
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 ;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 recognizedText:(id)arg1 correctedText:(id)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif