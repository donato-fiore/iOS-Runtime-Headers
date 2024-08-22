// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICUSTOMVIEWMENUELEMENT_H
#define UICUSTOMVIEWMENUELEMENT_H

@class NSString;
@protocol _UIMenuLeaf;


#import "UIMenuElement.h"
#import "UIView.h"
#import "UIImage.h"

@interface UICustomViewMenuElement : UIMenuElement <_UIMenuLeaf>



@property (nonatomic) NSUInteger attributes; // ivar: attributes
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *discoverabilityTitle; // ivar: discoverabilityTitle
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL keepsMenuPresented;
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput; // ivar: requiresAuthenticatedInput
@property (nonatomic) NSInteger state; // ivar: state
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id *viewProvider; // ivar: _viewProvider


+(id)elementWithViewProvider:(id)arg0 ;
-(BOOL)_isDefaultCommand;
-(BOOL)isLeaf;
-(BOOL)isLoadingPlaceholder;
-(NSInteger)_leafKeyModifierFlags;
-(id)_immutableCopy;
-(id)_leafAlternates;
-(id)_leafKeyInput;
-(id)_resolvedTargetFromFirstTarget:(id)arg0 ;
-(id)_validatedLeafWithAlternate:(id)arg0 target:(id)arg1 validation:(id)arg2 ;
// -(void)_acceptMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(void)_performWithTarget:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif