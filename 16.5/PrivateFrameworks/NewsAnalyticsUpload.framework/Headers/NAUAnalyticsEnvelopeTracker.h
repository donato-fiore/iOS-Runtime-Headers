// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NAUANALYTICSENVELOPETRACKER_H
#define NAUANALYTICSENVELOPETRACKER_H


#import <Foundation/Foundation.h>


@interface NAUAnalyticsEnvelopeTracker : NSObject



+(id)_contentTypeProperty;
+(id)_daysSinceSubmissionDateProperty;
+(void)_registerContentTypes:(id)arg0 withEventName:(id)arg1 ;
+(void)_registerEnvelopes:(id)arg0 withEventName:(id)arg1 ;
+(void)registerEnvelopeContentTypesAsDropped:(id)arg0 forReason:(NSUInteger)arg1 withError:(id)arg2 ;
+(void)registerEnvelopeContentTypesAsPreparedForUpload:(id)arg0 ;
+(void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(id)arg0 ;
+(void)registerEnvelopeContentTypesAsUploaded:(id)arg0 ;
+(void)registerEnvelopeCreationAnticipatedForContentType:(int)arg0 ;
+(void)registerEnvelopesAsCreated:(id)arg0 ;
+(void)registerEnvelopesAsReceivedByUploader:(id)arg0 ;
+(void)registerEnvelopesAsSubmittedToUploader:(id)arg0 ;


@end


#endif