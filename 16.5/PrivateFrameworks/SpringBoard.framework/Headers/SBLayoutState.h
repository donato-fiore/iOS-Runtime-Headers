// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLAYOUTSTATE_H
#define SBLAYOUTSTATE_H

@class NSString, NSSet, NSDictionary;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBLayoutState : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *elements; // ivar: _elements
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (copy, nonatomic) NSDictionary *interfaceOrientationByLayoutElementIdentifier; // ivar: _interfaceOrientationByLayoutElementIdentifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 withRole:(NSInteger)arg1 ;
-(BOOL)isMeaningfullyDifferentFromLayoutState:(id)arg0 ;
-(BOOL)layoutContainsRole:(NSInteger)arg0 ;
-(NSInteger)_defaultInterfaceOrientation;
-(NSInteger)_interfaceOrientationForElementIdentifier:(id)arg0 unknownAllowed:(BOOL)arg1 ;
-(NSInteger)interfaceOrientationForElementIdentifier:(id)arg0 ;
-(NSInteger)interfaceOrientationForLayoutElement:(id)arg0 ;
-(NSInteger)interfaceOrientationForLayoutElement:(id)arg0 unknownAllowed:(BOOL)arg1 ;
-(NSInteger)interfaceOrientationForLayoutRole:(NSInteger)arg0 ;
-(id)_initWithLayoutElements:(id)arg0 interfaceOrientation:(NSInteger)arg1 interfaceOrientationByLayoutElement:(id)arg2 ;
-(id)appLayout;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)elementWithIdentifier:(id)arg0 ;
-(id)elementWithRole:(NSInteger)arg0 ;
-(id)floatingAppLayout;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)invalidateAppLayout;
-(void)invalidateFloatingAppLayout;


@end


#endif