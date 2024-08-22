// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNAASSERTION_H
#define SNAASSERTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "_TtC16SessionAssertion23SessionRequestAssertion.h"
#import "SNAAssertionTarget.h"

@interface SNAAssertion : NSObject {
    _TtC16SessionAssertion23SessionRequestAssertion *_sessionAssertion;
    id *_invalidationHandler;
}


@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) NSUInteger invalidationReason;
@property (readonly, copy, nonatomic) NSArray *sessionIdentifiers;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly, copy, nonatomic) SNAAssertionTarget *target;


-(id)init;
-(id)initWithExplanation:(id)arg0 target:(id)arg1 invalidateOnSessionRequest:(BOOL)arg2 invalidationHandler:(id)arg3 ;
-(id)initWithExplanation:(id)arg0 target:(id)arg1 invalidationHandler:(id)arg2 ;
-(void)invalidate;


@end


#endif