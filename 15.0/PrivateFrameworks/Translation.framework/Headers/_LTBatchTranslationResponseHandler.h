// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTBATCHTRANSLATIONRESPONSEHANDLER_H
#define _LTBATCHTRANSLATIONRESPONSEHANDLER_H

@class NSMutableDictionary, NSString, LTSchemaBatchTranslationEvent, NSLocale, NSURL, NSDate;
@protocol FTBatchTranslationResponseDelegate;

#import <Foundation/Foundation.h>

#import "_LTTranslationParagraph.h"
#import "FTMutableBatchTranslationRequest.h"

@interface _LTBatchTranslationResponseHandler : NSObject <FTBatchTranslationResponseDelegate>



@property (retain, nonatomic) NSMutableDictionary *batchedParagraphs; // ivar: _batchedParagraphs
@property (nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (copy, nonatomic) NSString *clientHeader; // ivar: _clientHeader
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (nonatomic) BOOL completionHandlerCalled; // ivar: _completionHandlerCalled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasFinalServerResponse; // ivar: _hasFinalServerResponse
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LTSchemaBatchTranslationEvent *metricEvent; // ivar: _metricEvent
@property (retain, nonatomic) _LTTranslationParagraph *paragraph; // ivar: _paragraph
@property (retain, nonatomic) FTMutableBatchTranslationRequest *request; // ivar: _request
@property (retain, nonatomic) NSString *requestID; // ivar: _requestID
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (retain, nonatomic) NSLocale *sourceLocale; // ivar: _sourceLocale
@property (retain, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLocale *targetLocale; // ivar: _targetLocale
@property (nonatomic) NSInteger taskHint; // ivar: _taskHint
@property (retain, nonatomic) NSLocale *toLocale; // ivar: _toLocale


-(void)callCompletionHandlersWithError:(id)arg0 ;
-(void)streamDidReceiveBatchTranslationStreamingResponse:(id)arg0 ;
-(void)streamFailVerifyBatchTranslationStreamingResponse:(id)arg0 ;


@end


#endif