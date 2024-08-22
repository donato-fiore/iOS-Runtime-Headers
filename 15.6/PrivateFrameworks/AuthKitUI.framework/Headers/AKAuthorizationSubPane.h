// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTHORIZATIONSUBPANE_H
#define AKAUTHORIZATIONSUBPANE_H

@class UIView, UIViewController;
@protocol AKAuthorizationSubPaneAdding;

#import <Foundation/Foundation.h>


@interface AKAuthorizationSubPane : NSObject <AKAuthorizationSubPaneAdding>



@property (nonatomic) CGFloat customSpacingAfter;
@property (nonatomic) CGFloat internalCustomSpacingAfter; // ivar: _internalCustomSpacingAfter
@property (readonly, nonatomic) UIView *internalView; // ivar: _internalView
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithView:(id)arg0 ;
-(id)initWithViewController:(id)arg0 ;
-(void)addToConstraints:(id)arg0 context:(id)arg1 ;
-(void)addToStackView:(id)arg0 context:(id)arg1 ;


@end


#endif