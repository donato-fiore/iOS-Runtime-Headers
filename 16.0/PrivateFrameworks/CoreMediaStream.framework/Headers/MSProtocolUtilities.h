// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPROTOCOLUTILITIES_H
#define MSPROTOCOLUTILITIES_H


#import <Foundation/Foundation.h>


@interface MSProtocolUtilities : NSObject



+(id)Win32SHA1OfUDID:(id)arg0 ;
+(id)_urlSession;
+(id)appleIDSession;
+(id)deviceInfoDictForPersonID:(id)arg0 ;
+(id)retryAfterDateBasedOnRetryAfterHeaderString:(id)arg0 ;
+(void)applyUserDefaultOverridesToResponse:(id)arg0 ;
+(void)fetchMPSStateWithBaseAvailabilityURL:(id)arg0 personID:(id)arg1 originalLibrarySize:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif