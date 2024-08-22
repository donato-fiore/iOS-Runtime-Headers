// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNAPRESENTATIONASSERTION_H
#define SNAPRESENTATIONASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC16SessionAssertion21PresentationAssertion.h"

@interface SNAPresentationAssertion : NSObject {
    _TtC16SessionAssertion21PresentationAssertion *_assertion;
    id *_invalidationHandler;
}


@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) NSUInteger invalidationReason;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSUInteger state;


-(id)init;
-(id)initWithExplanation:(id)arg0 sessionIdentifier:(id)arg1 presentationState:(NSUInteger)arg2 invalidationHandler:(id)arg3 ;
-(void)invalidate;


@end


#endif