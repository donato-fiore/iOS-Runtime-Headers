// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSDISPLAYLAYOUTTRANSITIONCONTEXT_H
#define FBSDISPLAYLAYOUTTRANSITIONCONTEXT_H

@class NSOrderedSet, NSString, NSSet;
@protocol BSXPCCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface FBSDisplayLayoutTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding>

 {
    NSOrderedSet *_transitionReasons;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *transitionReason;
@property (readonly, copy, nonatomic) NSSet *transitionReasons;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif