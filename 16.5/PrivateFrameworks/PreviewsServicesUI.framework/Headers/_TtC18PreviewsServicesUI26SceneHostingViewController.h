// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PREVIEWSSERVICESUI26SCENEHOSTINGVIEWCONTROLLER_H
#define _TTC18PREVIEWSSERVICESUI26SCENEHOSTINGVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC18PreviewsServicesUI26SceneHostingViewController : UIViewController {
    ? deactivatedHandler;
    ? isUserActivePreview;
    ? identifier;
    ? host;
    ? currentActivationRequest;
    ? firstResponderStatus;
    ? sceneObservationToken;
    ? readyForDisplay;
}


@property (nonatomic, readonly) BOOL canBecomeFirstResponder;


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif