// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYEDUCATIONPILLVIEWCONTROLLER_H
#define SBEXTERNALDISPLAYEDUCATIONPILLVIEWCONTROLLER_H

@class UIViewController, PLPillView, NSString;
@protocol BNPresentable, SBExternalDisplayEducationPillViewControllerDelegate, BNPresentableContext;



@interface SBExternalDisplayEducationPillViewController : UIViewController <BNPresentable>

 {
    BOOL _extendedDisplayEnabled;
    PLPillView *_pillView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBExternalDisplayEducationPillViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


-(id)_pillSubtitleContentItem;
-(id)initWithExtendedDisplayEnabled:(BOOL)arg0 ;
-(id)presentableDescription;
-(void)_handleSingleTap:(id)arg0 ;
-(void)updateExtendedDisplayEnabled:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif