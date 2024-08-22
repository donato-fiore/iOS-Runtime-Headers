// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLAYOUTSTATE_H
#define SBLAYOUTSTATE_H

@class NSString, NSSet;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBLayoutState : NSObject <BSDescriptionProviding>

 {
    NSInteger _interfaceOrientation;
    NSInteger _elementInterfaceOrientation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger elementInterfaceOrientation;
@property (readonly, nonatomic) NSSet *elements; // ivar: _elements
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger interfaceOrientation;
@property (readonly) Class superclass;


+(NSInteger)_defaultInterfaceOrientation;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 withRole:(NSInteger)arg1 ;
-(BOOL)layoutContainsRole:(NSInteger)arg0 ;
-(id)_initWithLayoutElements:(id)arg0 interfaceOrientation:(NSInteger)arg1 elementInterfaceOrientation:(NSInteger)arg2 ;
-(id)appLayout;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)displayItemFromLayoutElement:(id)arg0 ;
-(id)elementWithIdentifier:(id)arg0 ;
-(id)elementWithRole:(NSInteger)arg0 ;
-(id)floatingAppLayout;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif