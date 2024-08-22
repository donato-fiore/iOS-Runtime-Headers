// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONVIEWCONTEXTMENUWRAPPERVIEWCONTROLLER_H
#define SBHICONVIEWCONTEXTMENUWRAPPERVIEWCONTROLLER_H

@class UIViewController, MTMaterialView, NSArray, NSString;
@protocol WGWidgetViewControllerDelegate, SBHRecentsDocumentExtensionProviderDelegate;



@interface SBHIconViewContextMenuWrapperViewController : UIViewController <WGWidgetViewControllerDelegate, SBHRecentsDocumentExtensionProviderDelegate>

 {
    MTMaterialView *_backgroundView;
    NSArray *_layoutConstraints;
}


@property (nonatomic) CGFloat backgroundScale; // ivar: _backgroundScale
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (nonatomic) CGFloat continuousCornerRadius; // ivar: _continuousCornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupNameBase; // ivar: _groupNameBase
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_applyContinuousCornerRadius;
-(void)_applyPreferredContentSizeChange:(struct CGSize )arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)recentsDocumentExtensionViewControllerRequestsDismiss:(id)arg0 ;
-(void)remoteViewControllerDidConnectForWidgetViewController:(id)arg0 ;
-(void)remoteViewControllerViewDidAppearForWidgetViewController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif