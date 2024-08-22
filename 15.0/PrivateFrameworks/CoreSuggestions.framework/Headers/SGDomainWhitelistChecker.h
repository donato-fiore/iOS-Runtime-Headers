// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDOMAINWHITELISTCHECKER_H
#define SGDOMAINWHITELISTCHECKER_H


#import <Foundation/Foundation.h>


@interface SGDomainWhitelistChecker : NSObject



+(BOOL)isStructuredEventCandidateForEmailDomain:(id)arg0 ;
+(BOOL)isStructuredEventCandidateForURL:(id)arg0 title:(id)arg1 ;
+(id)lock;
+(struct ? )payloadForDomain:(id)arg0 ;
+(struct ? )payloadWithStartChar:(char *)arg0 andSize:(NSUInteger)arg1 ;
+(void)_setTrieFromPath:(id)arg0 guardedData:(id)arg1 ;
+(void)setTrieFromPath:(id)arg0 ;


@end


#endif