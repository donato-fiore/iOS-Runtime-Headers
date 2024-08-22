// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETEFETCHREQUESTTRACING_H
#define CNAUTOCOMPLETEFETCHREQUESTTRACING_H


#import <Foundation/Foundation.h>


@interface CNAutocompleteFetchRequestTracing : NSObject



+(id)lengthOfSearchString:(id)arg0 ;
+(id)signatureForSearchType:(NSUInteger)arg0 ;
+(id)wordCountForSearchString:(id)arg0 ;
+(void)sendMessageTracersForRequest:(id)arg0 ;


@end


#endif