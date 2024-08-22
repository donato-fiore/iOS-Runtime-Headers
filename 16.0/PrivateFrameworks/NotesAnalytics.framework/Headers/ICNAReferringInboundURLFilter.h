// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNAREFERRINGINBOUNDURLFILTER_H
#define ICNAREFERRINGINBOUNDURLFILTER_H


#import <Foundation/Foundation.h>


@interface ICNAReferringInboundURLFilter : NSObject



+(BOOL)foundMatchingPrefixAmongCandidates:(id)arg0 forInputString:(id)arg1 matchingPrefixInplaceResult:(*id)arg2 ;
+(id)allowedTieredPrefixReplacements;
+(id)filterReferringInboundURL:(id)arg0 ;
+(id)filterStringByAllowedTieredPrefixReplacements:(id)arg0 ;
+(id)filterURLByLogicalReplacements:(id)arg0 ;


@end


#endif