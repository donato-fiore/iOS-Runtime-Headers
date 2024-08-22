// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMMENTIONDETECTORSERVICEUTILS_H
#define CDMMENTIONDETECTORSERVICEUTILS_H


#import <Foundation/Foundation.h>


@interface CDMMentionDetectorServiceUtils : NSObject



+(id)buildMDRequestWithUtterance:(id)arg0 tokenChain:(id)arg1 embedding:(id)arg2 nluRequestId:(id)arg3 resultCandidateId:(id)arg4 cdmRequestId:(id)arg5 ;
+(void)logMDRequestToFile:(id)arg0 ;
+(void)logMDResponseToFile:(id)arg0 ;


@end


#endif