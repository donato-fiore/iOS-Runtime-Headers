// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10CHRONOCORE35SYSTEMAPERTUREELEMENTVIEWCONTROLLER_H
#define _TTC10CHRONOCORE35SYSTEMAPERTUREELEMENTVIEWCONTROLLER_H

@class UIViewController, NSString, UIColor, NSURL, UIView<SBUISystemApertureAccessoryView>, UIViewController<SBUISystemApertureElement>;
@protocol SBUISystemApertureElement, SBUISystemApertureElementProviding, BSInvalidatable;



@interface _TtC10ChronoCore35SystemApertureElementViewController : UIViewController <SBUISystemApertureElement, SBUISystemApertureElementProviding, BSInvalidatable>

 {
    ? associatedScenePersistenceIdentifier;
    ? associatedAppBundleIdentifier;
    ? elementIdentifier;
    ? expandedUIHostingController;
    ? leadingUIHostingController;
    ? trailingUIHostingController;
    ? minimalUIHostingController;
    ? _cancellables;
    ? _logger;
    ? _logIdentifier;
    ? _scene;
}


@property (nonatomic) NSInteger activeLayoutMode; // ivar: activeLayoutMode
@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, copy) NSString *associatedScenePersistenceIdentifier;
@property (nonatomic) BOOL attachedMinimalViewRequiresZeroPadding; // ivar: attachedMinimalViewRequiresZeroPadding
@property (nonatomic) NSInteger contentRole; // ivar: contentRole
@property (nonatomic, copy) NSString *elementIdentifier;
@property (nonatomic, readonly) UIColor *keyColor;
@property (nonatomic, readonly) NSURL *launchURL;
@property (nonatomic, retain) UIView<SBUISystemApertureAccessoryView> *leadingView; // ivar: leadingView
@property (nonatomic) NSInteger maximumLayoutMode; // ivar: maximumLayoutMode
@property (nonatomic, retain) UIView<SBUISystemApertureAccessoryView> *minimalView; // ivar: minimalView
@property (nonatomic) NSInteger preferredLayoutMode; // ivar: preferredLayoutMode
@property (nonatomic) NSUInteger presentationBehaviors; // ivar: presentationBehaviors
@property (nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (nonatomic, retain) UIView<SBUISystemApertureAccessoryView> *trailingView; // ivar: trailingView


-(BOOL)_canShowWhileLocked;
-(id)_timelinesForDateInterval:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_updateWithFrameSpecifier:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)arg0 ;


@end


#endif