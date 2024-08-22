// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUSERACTIVITYRESTORATION_H
#define CNUSERACTIVITYRESTORATION_H


#import <Foundation/Foundation.h>


@interface CNUserActivityRestoration : NSObject



+(id)contactBestMatchingPayload:(id)arg0 additionalKeysToFetch:(id)arg1 contactStore:(id)arg2 error:(*id)arg3 ;
+(id)contactsForServerUUIDs:(id)arg0 additionalKeysToFetch:(id)arg1 contactStore:(id)arg2 error:(*id)arg3 ;
+(id)contactsGivenPayload:(id)arg0 keysToFetch:(id)arg1 contactStore:(id)arg2 error:(*id)arg3 ;
+(id)contactsToCreateGivenPayload:(id)arg0 error:(*id)arg1 ;
+(id)os_log;
+(id)searchQueryGivenPayload:(id)arg0 ;


@end


#endif