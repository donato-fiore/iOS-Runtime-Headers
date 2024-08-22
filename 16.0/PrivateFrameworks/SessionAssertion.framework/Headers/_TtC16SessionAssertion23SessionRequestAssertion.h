// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SESSIONASSERTION23SESSIONREQUESTASSERTION_H
#define _TTC16SESSIONASSERTION23SESSIONREQUESTASSERTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "SNAAssertionTarget.h"

@interface _TtC16SessionAssertion23SessionRequestAssertion : NSObject {
    ? attributeAssertion;
    ? invalidationHandler;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *explanation;
@property (nonatomic, readonly) NSArray *sessionIdentifiers;
@property (nonatomic, readonly) NSUInteger snaInvalidationReason;
@property (nonatomic, readonly) NSUInteger snaState;
@property (nonatomic, readonly) SNAAssertionTarget *snaTarget;


-(id)init;
-(id)initWithExplanation:(id)arg0 target:(id)arg1 invalidateOnSessionRequest:(BOOL)arg2 invalidationHandler:(id)arg3 ;
-(id)initWithExplanation:(id)arg0 target:(id)arg1 options:(id)arg2 invalidationHandler:(id)arg3 ;
-(void)invalidate;


@end


#endif