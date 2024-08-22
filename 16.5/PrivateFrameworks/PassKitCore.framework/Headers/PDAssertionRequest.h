// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDASSERTIONREQUEST_H
#define PDASSERTIONREQUEST_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PDAssertion.h"

@interface PDAssertionRequest : NSObject

@property (retain, nonatomic) PDAssertion *assertion; // ivar: _assertion
@property (retain, nonatomic) NSObject<OS_dispatch_source> *invalidationTimer; // ivar: _invalidationTimer
@property (copy, nonatomic) id *resultHandler; // ivar: _resultHandler


-(NSUInteger)hash;
-(id)initWithAssertion:(id)arg0 delegate:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif