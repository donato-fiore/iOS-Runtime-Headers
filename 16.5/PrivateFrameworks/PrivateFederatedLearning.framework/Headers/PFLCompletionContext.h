// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFLCOMPLETIONCONTEXT_H
#define PFLCOMPLETIONCONTEXT_H

@class NSError, NSData;

#import <Foundation/Foundation.h>


@interface PFLCompletionContext : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSData *privatizedDiffs; // ivar: _privatizedDiffs


-(id)initWithPrivatizedDiffs:(id)arg0 error:(id)arg1 ;


@end


#endif