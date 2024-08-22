// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIEVENTDEFERRINGOWNERSHIPTOKEN_H
#define _UIEVENTDEFERRINGOWNERSHIPTOKEN_H

@class NSMutableSet, NSString, NSSet, BKSHIDEventDeferringTarget;
@protocol BSDebugDescriptionProviding;

#import <Foundation/Foundation.h>


@interface _UIEventDeferringOwnershipToken : NSObject <BSDebugDescriptionProviding>

 {
    NSMutableSet *_environmentsPendingInvalidation;
    BOOL _hasInvalidated;
    NSString *_ownerClass;
    NSInteger _owningInterfaceElementCategory;
    *void _ownerPointer;
    NSUInteger _scope;
    NSSet *_environments;
    BKSHIDEventDeferringTarget *_target;
    NSString *_reason;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;


@end


#endif