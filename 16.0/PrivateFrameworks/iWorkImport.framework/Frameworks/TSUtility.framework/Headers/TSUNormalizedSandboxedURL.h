// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUNORMALIZEDSANDBOXEDURL_H
#define TSUNORMALIZEDSANDBOXEDURL_H



#import "TSUSandboxedURL.h"

@interface TSUNormalizedSandboxedURL : TSUSandboxedURL {
    TSUSandboxedURL *_originalSandboxedURL;
}




-(BOOL)hasSandboxAccess;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithURL:(id)arg0 originalSandboxedURL:(id)arg1 ;
-(id)originalSandboxedURLForNormalizing;


@end


#endif