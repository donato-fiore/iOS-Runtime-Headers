// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONDITIONSHOSTINGVIEW_H
#define WFCONDITIONSHOSTINGVIEW_H

@class UICollectionReusableView, WFWorkflow;
@protocol WFConditionsHostingViewDelegate;



@interface WFConditionsHostingView : UICollectionReusableView {
    ? sizingView;
}


@property (nonatomic, weak) NSObject<WFConditionsHostingViewDelegate> *delegate; // ivar: delegate
@property (nonatomic, retain) WFWorkflow *workflow; // ivar: workflow


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;


@end


#endif