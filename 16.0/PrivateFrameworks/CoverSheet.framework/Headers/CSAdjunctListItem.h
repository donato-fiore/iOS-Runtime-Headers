// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSADJUNCTLISTITEM_H
#define CSADJUNCTLISTITEM_H

@class NSMutableSet, SBSLockScreenContentAction, UIViewController<CSAdjunctItemHosting>, NSString, UIView;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface CSAdjunctListItem : NSObject <BSDescriptionProviding>

 {
    NSMutableSet *_actions;
}


@property (readonly, nonatomic) SBSLockScreenContentAction *action;
@property (nonatomic) BOOL animateDismissal; // ivar: _animateDismissal
@property (nonatomic) BOOL animatePresentation; // ivar: _animatePresentation
@property (retain, nonatomic) UIViewController<CSAdjunctItemHosting> *contentHost; // ivar: contentHost
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIView *itemView; // ivar: itemView
@property (readonly) Class superclass;


-(BOOL)isValid;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addAction:(id)arg0 ;
-(void)removeAction:(id)arg0 ;


@end


#endif