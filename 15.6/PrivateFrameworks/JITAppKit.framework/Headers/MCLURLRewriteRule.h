// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCLURLREWRITERULE_H
#define MCLURLREWRITERULE_H

@class NSRegularExpression, NSString, NSSet;


#import "MCLURLRequestRewriteRule.h"

@interface MCLURLRewriteRule : MCLURLRequestRewriteRule {
    NSRegularExpression *_replacePattern;
    NSString *_replaceTemplate;
    NSSet *_ignoreHosts;
}




+(id)urlRewriteRuleFromHost:(id)arg0 toHost:(id)arg1 ignoreHosts:(id)arg2 ;
-(id)initWithMatchPattern:(id)arg0 replacePattern:(id)arg1 replaceTemplate:(id)arg2 ignoreHosts:(id)arg3 ;
-(void)rewriteURLRequest:(id)arg0 ;


@end


#endif