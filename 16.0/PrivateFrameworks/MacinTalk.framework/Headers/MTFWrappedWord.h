// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTFWRAPPEDWORD_H
#define MTFWRAPPEDWORD_H

@class NSString;


#import "MTFWrappedSpeechElement.h"

@interface MTFWrappedWord : MTFWrappedSpeechElement

@property (readonly, nonatomic) NSString *fGroupPOS;
@property (readonly, nonatomic) NSString *fResolvedPOS;
@property (readonly, nonatomic) NSString *fText;


-(struct MTFEWord *)elem;


@end


#endif