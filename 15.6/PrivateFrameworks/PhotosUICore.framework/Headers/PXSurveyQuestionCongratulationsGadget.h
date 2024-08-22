// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSURVEYQUESTIONCONGRATULATIONSGADGET_H
#define PXSURVEYQUESTIONCONGRATULATIONSGADGET_H

@class NSString;
@protocol PXGadget, PXSurveyQuestionCongratulationsGadgetContentViewDelegate, PXGadgetDelegate;

#import <Foundation/Foundation.h>

#import "PXSurveyQuestionsCongratulationsGadgetContentView.h"
#import "PXGadgetSpec.h"

@interface PXSurveyQuestionCongratulationsGadget : NSObject <PXGadget, PXSurveyQuestionCongratulationsGadgetContentViewDelegate>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (retain, nonatomic) PXSurveyQuestionsCongratulationsGadgetContentView *contentView; // ivar: _contentView
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
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) CGRect visibleContentRect;


-(id)initWithType:(NSUInteger)arg0 ;
-(id)uniqueGadgetIdentifier;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)congratulationsGadgetContentViewDidSelectActionButton:(id)arg0 ;


@end


#endif