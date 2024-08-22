// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBSETUPASSISTANTDYNAMICLAYOUTCONTROLLER_H
#define OBSETUPASSISTANTDYNAMICLAYOUTCONTROLLER_H

@class UIViewController, NSString, UIImage, UIView;
@protocol OBSetupAssistantSupport;


#import "OBWelcomeController.h"

@interface OBSetupAssistantDynamicLayoutController : UIViewController <OBSetupAssistantSupport>



@property (retain, nonatomic) OBWelcomeController *backingController; // ivar: _backingController
@property (copy, nonatomic) id *constraintForLayoutFactory; // ivar: _constraintForLayoutFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableStickyHeader; // ivar: _enableStickyHeader
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localDetailText; // ivar: _localDetailText
@property (retain, nonatomic) UIImage *localImage; // ivar: _localImage
@property (copy, nonatomic) NSString *localTitle; // ivar: _localTitle
@property (retain, nonatomic) UIView *mainContentSubview; // ivar: _mainContentSubview
@property (retain, nonatomic) UIView *outerContentView; // ivar: _outerContentView
@property (readonly) Class superclass;


-(NSInteger)contentViewLayout;
-(id)buttonTray;
-(id)contentView;
-(id)headerView;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)_relayoutContentSubviewIfNeeded;
-(void)_updateScrollUnderLayout;
-(void)addContentSubView:(id)arg0 heightConstraintForLayout:(id)arg1 ;
-(void)resetLayoutTo:(NSInteger)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif