// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNAPROMINENTPRESENTATIONASSERTION_H
#define SNAPROMINENTPRESENTATIONASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC16SessionAssertion30ProminentPresentationAssertion.h"

@interface SNAProminentPresentationAssertion : NSObject {
    _TtC16SessionAssertion30ProminentPresentationAssertion *_assertion;
    id *_invalidationHandler;
}


@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) NSUInteger invalidationReason;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSUInteger state;


-(id)init;
-(id)initWithExplanation:(id)arg0 sessionIdentifier:(id)arg1 duration:(CGFloat)arg2 invalidationHandler:(id)arg3 ;
-(id)initWithExplanation:(id)arg0 sessionIdentifier:(id)arg1 invalidationHandler:(id)arg2 ;
-(void)invalidate;


@end


#endif