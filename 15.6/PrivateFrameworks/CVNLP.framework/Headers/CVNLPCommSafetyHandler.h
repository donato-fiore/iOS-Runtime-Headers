// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPCOMMSAFETYHANDLER_H
#define CVNLPCOMMSAFETYHANDLER_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CVNLPCommSafetyImageAnalyzer.h"
#import "CVNLPPerformance.h"
#import "CVNLPCommSafetyTextAnalyzer.h"

@interface CVNLPCommSafetyHandler : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly) CVNLPCommSafetyImageAnalyzer *imageAnalyzer; // ivar: _imageAnalyzer
@property (readonly) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) CVNLPPerformance *perfResults; // ivar: _perfResults
@property (readonly) CVNLPCommSafetyTextAnalyzer *textAnalyzer; // ivar: _textAnalyzer


-(NSInteger)classifyImage:(struct CGImage *)arg0 ;
-(NSInteger)classifyImage:(struct CGImage *)arg0 error:(*id)arg1 ;
-(NSInteger)classifyPixelBuffer:(struct __CVBuffer *)arg0 ;
-(NSInteger)classifyPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)classifyPixelBuffer:(struct __CVBuffer *)arg0 stagedText:(id)arg1 inConversationWithIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)classifyPixelBuffer:(struct __CVBuffer *)arg0 startDate:(id)arg1 endDate:(id)arg2 stagedText:(id)arg3 inConversationWithIdentifier:(id)arg4 error:(*id)arg5 ;
-(id)generateClassificationScoresForImage:(struct CGImage *)arg0 ;
-(id)generateClassificationScoresForImage:(struct CGImage *)arg0 error:(*id)arg1 ;
-(id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)getOperatingPointDataForClassName:(id)arg0 ;
-(id)getOperatingPointDataForClassName:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)performanceStatistics;
-(id)processText:(id)arg0 inConversationWithIdentifier:(id)arg1 date:(id)arg2 error:(*id)arg3 ;
// -(void)processConversationsWithStartDate:(id)arg0 endDate:(id)arg1 previousClassifications:(id)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;


@end


#endif