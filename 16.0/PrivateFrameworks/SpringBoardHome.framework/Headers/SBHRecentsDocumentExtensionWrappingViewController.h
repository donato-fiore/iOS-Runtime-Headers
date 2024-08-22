// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHRECENTSDOCUMENTEXTENSIONWRAPPINGVIEWCONTROLLER_H
#define SBHRECENTSDOCUMENTEXTENSIONWRAPPINGVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSMapTable, NSString, _UIRemoteViewController;
@protocol SBHRecentsDocumentExtensionViewControlling, SBHRecentsDocumentExtensionWrappingViewControllerDelegate;



@interface SBHRecentsDocumentExtensionWrappingViewController : UIViewController <SBHRecentsDocumentExtensionViewControlling>

 {
    NSMutableArray *_constraints;
    NSMapTable *_touchCancellationAssertionsToTokens;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHRecentsDocumentExtensionWrappingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) BOOL usesIntrinsicContentSizeBasedOnScreenSize; // ivar: _usesIntrinsicContentSizeBasedOnScreenSize
@property (readonly, nonatomic) _UIRemoteViewController *wrappedRemoteViewController; // ivar: _wrappedRemoteViewController


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(id)init;
-(void)_updateViewIntrinsicContentSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)wrapRemoteViewController:(id)arg0 ;


@end


#endif