// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRERESPONSESGENERATEDEVENT_H
#define PRERESPONSESGENERATEDEVENT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PREResponsesGeneratedEvent : NSObject

@property (nonatomic) int generationStatus; // ivar: _generationStatus
@property (nonatomic) BOOL hasQuestionMark; // ivar: _hasQuestionMark
@property (nonatomic) BOOL isCached; // ivar: _isCached
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) NSUInteger messageCharCount; // ivar: _messageCharCount
@property (nonatomic) NSUInteger responseGenerationTime; // ivar: _responseGenerationTime
@property (nonatomic) NSUInteger responseTimePerf; // ivar: _responseTimePerf
@property (retain, nonatomic) NSArray *responses; // ivar: _responses




@end


#endif