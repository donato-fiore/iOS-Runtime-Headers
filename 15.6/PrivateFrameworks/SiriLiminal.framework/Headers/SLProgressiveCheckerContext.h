// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLPROGRESSIVECHECKERCONTEXT_H
#define SLPROGRESSIVECHECKERCONTEXT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface SLProgressiveCheckerContext : NSObject

@property (readonly, nonatomic) NSUInteger audioOption; // ivar: _audioOption
@property (readonly, nonatomic) NSUInteger invocationType; // ivar: _invocationType
@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) NSDictionary *vtei; // ivar: _vtei


-(id)initWithContext:(id)arg0 error:(*id)arg1 ;


@end


#endif