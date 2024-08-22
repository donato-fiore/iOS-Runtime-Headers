// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SESSIONASSERTION21PRESENTATIONASSERTION_H
#define _TTC16SESSIONASSERTION21PRESENTATIONASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC16SessionAssertion21PresentationAssertion : NSObject {
    ? attributeAssertion;
    ? invalidationHandler;
}


@property (nonatomic, readonly) NSString *activityIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *explanation;
@property (nonatomic, readonly) NSUInteger snaInvalidationReason;
@property (nonatomic, readonly) NSString *snaSessionIdentifier;
@property (nonatomic, readonly) NSUInteger snaState;


-(id)init;
-(id)initWithExplanation:(id)arg0 activityIdentifier:(id)arg1 presentationState:(NSUInteger)arg2 invalidationHandler:(id)arg3 ;
-(void)invalidate;


@end


#endif