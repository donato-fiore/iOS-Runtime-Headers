// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMEDUSABANNERVIEWCONTROLLER_H
#define SBMEDUSABANNERVIEWCONTROLLER_H

@class UIViewController, PLPillView, NSString;
@protocol BNPresentable, BNPresentableContext;



@interface SBMedusaBannerViewController : UIViewController <BNPresentable>

 {
    PLPillView *_pillView;
    NSInteger _type;
    NSInteger _orientation;
    NSInteger _peekConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
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


-(id)_bannerView;
-(id)initWithType:(NSInteger)arg0 orientation:(NSInteger)arg1 peekConfiguration:(NSInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif