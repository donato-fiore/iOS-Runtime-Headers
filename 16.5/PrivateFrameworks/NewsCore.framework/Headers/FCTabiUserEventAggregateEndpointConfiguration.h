// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTABIUSEREVENTAGGREGATEENDPOINTCONFIGURATION_H
#define FCTABIUSEREVENTAGGREGATEENDPOINTCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCTabiUserEventAggregateEndpointConfiguration : NSObject

@property (retain, nonatomic) NSString *inputBodyTextLengthKey; // ivar: _inputBodyTextLengthKey
@property (retain, nonatomic) NSString *inputEventDurationKey; // ivar: _inputEventDurationKey
@property (retain, nonatomic) NSString *inputEventTypeKey; // ivar: _inputEventTypeKey
@property (retain, nonatomic) NSString *inputFeedKey; // ivar: _inputFeedKey
@property (retain, nonatomic) NSString *inputFullBodyEmbeddingKey; // ivar: _inputFullBodyEmbeddingKey
@property (retain, nonatomic) NSString *inputGroupKey; // ivar: _inputGroupKey
@property (retain, nonatomic) NSString *inputIsAnfKey; // ivar: _inputIsAnfKey
@property (retain, nonatomic) NSString *inputIsAudioKey; // ivar: _inputIsAudioKey
@property (retain, nonatomic) NSString *inputIsFeaturedKey; // ivar: _inputIsFeaturedKey
@property (retain, nonatomic) NSString *inputIsPaidKey; // ivar: _inputIsPaidKey
@property (retain, nonatomic) NSString *inputIsVideoKey; // ivar: _inputIsVideoKey
@property (retain, nonatomic) NSString *inputPublisherIdKey; // ivar: _inputPublisherIdKey
@property (retain, nonatomic) NSString *inputTitleEmbeddingKey; // ivar: _inputTitleEmbeddingKey
@property (retain, nonatomic) NSString *inputTopicIDsKey; // ivar: _inputTopicIDsKey
@property (retain, nonatomic) NSString *inputViewActionKey; // ivar: _inputViewActionKey
@property (nonatomic) NSUInteger maxEvents; // ivar: _maxEvents
@property (retain, nonatomic) NSString *outputKey; // ivar: _outputKey


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif