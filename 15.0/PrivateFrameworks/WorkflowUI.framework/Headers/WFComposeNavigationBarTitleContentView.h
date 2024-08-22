// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOMPOSENAVIGATIONBARTITLECONTENTVIEW_H
#define WFCOMPOSENAVIGATIONBARTITLECONTENTVIEW_H

@class UIView, NSString;



@interface WFComposeNavigationBarTitleContentView : UIView {
    ? viewModel;
}


@property (nonatomic, readonly) NSString *placeholderName;


-(BOOL)finishRenamingIfNecessary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithWorkflow:(id)arg0 ;
-(void)updatePlaceholderIfNecessary;


@end


#endif