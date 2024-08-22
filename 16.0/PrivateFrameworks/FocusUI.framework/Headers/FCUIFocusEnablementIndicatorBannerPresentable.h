// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUIFOCUSENABLEMENTINDICATORBANNERPRESENTABLE_H
#define FCUIFOCUSENABLEMENTINDICATORBANNERPRESENTABLE_H

@class NSHashTable, NSString, UIViewController;
@protocol BNPresentable, BNTemplateContentProviding, BNPresentableObservable, FCActivityDescribing, BNTemplateViewProviding, BNPresentableContext, BNTemplateItemProviding;

#import <Foundation/Foundation.h>


@interface FCUIFocusEnablementIndicatorBannerPresentable : NSObject <BNPresentable, BNTemplateContentProviding, BNPresentableObservable>

 {
    NSHashTable *_observers;
}


@property (readonly, copy, nonatomic) NSObject<FCActivityDescribing> *activityDescription; // ivar: _activityDescription
@property (readonly, nonatomic, getter=isActivityEnabled) BOOL activityEnabled; // ivar: _activityEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BNTemplateViewProviding> *leadingTemplateViewProvider;
@property (readonly, copy, nonatomic) NSString *presentableAccessibilityIdentifier;
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, nonatomic) NSObject<BNTemplateItemProviding> *primaryTemplateItemProvider;
@property (readonly, nonatomic) BOOL providesTemplateContent;
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, copy, nonatomic) NSString *requesterIdentifier; // ivar: _requesterIdentifier
@property (readonly, nonatomic) NSObject<BNTemplateItemProviding> *secondaryTemplateItemProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) NSObject<BNTemplateViewProviding> *trailingTemplateViewProvider;
@property (readonly, nonatomic) UIViewController *viewController;


-(id)initWithActivityDescription:(id)arg0 requesterIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
-(id)presentableDescription;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)addPresentableObserver:(id)arg0 ;
-(void)handleTemplateContentEvent:(NSInteger)arg0 ;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)removePresentableObserver:(id)arg0 ;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg0 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg0 ;


@end


#endif