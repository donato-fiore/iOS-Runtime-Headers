// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTLOGGINGREQUESTHANDLER_H
#define _LTLOGGINGREQUESTHANDLER_H

@class NSString;
@protocol FTSpeechTranslationResponseDelegate, FTBatchTranslationResponseDelegate;

#import <Foundation/Foundation.h>

#import "FTBlazarService.h"

@interface _LTLoggingRequestHandler : NSObject <FTSpeechTranslationResponseDelegate, FTBatchTranslationResponseDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FTBlazarService *mtAppService; // ivar: _mtAppService
@property (readonly) Class superclass;


-(void)startLoggingRequest:(id)arg0 ;
-(void)startSafariFeedbackRequest:(id)arg0 ;
-(void)startSafariLatencyLoggingRequest:(id)arg0 ;
-(void)startSpeechLIDRequest:(id)arg0 ;
-(void)startSpeechSensesLoggingRequest:(id)arg0 ;
-(void)streamDidReceiveBatchTranslationStreamingResponse:(id)arg0 ;
-(void)streamDidReceiveSpeechTranslationStreamingResponse:(id)arg0 ;
-(void)streamFailVerifyBatchTranslationStreamingResponse:(id)arg0 ;
-(void)streamFailVerifySpeechTranslationStreamingResponse:(id)arg0 ;


@end


#endif