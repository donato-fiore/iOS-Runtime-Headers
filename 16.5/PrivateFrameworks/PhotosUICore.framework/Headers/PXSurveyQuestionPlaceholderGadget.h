// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSURVEYQUESTIONPLACEHOLDERGADGET_H
#define PXSURVEYQUESTIONPLACEHOLDERGADGET_H

@class NSString;
@protocol PXSurveyQuestionPlaceholderGadgetViewDelegate, PXGadget, PXGadgetDelegate;

#import <Foundation/Foundation.h>

#import "PXSurveyQuestionPlaceholderGadgetView.h"
#import "PXGadgetSpec.h"

@interface PXSurveyQuestionPlaceholderGadget : NSObject <PXSurveyQuestionPlaceholderGadgetViewDelegate, PXGadget>

 {
    PXSurveyQuestionPlaceholderGadgetView *_view;
}


@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority;
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)placeholderGadgetView:(id)arg0 invokeActionWithCompletionHandler:(id)arg1 ;
-(void)placeholderGadgetViewSizeThatFitsDidChange:(id)arg0 ;
-(void)prepareCollectionViewItem:(id)arg0 ;


@end


#endif