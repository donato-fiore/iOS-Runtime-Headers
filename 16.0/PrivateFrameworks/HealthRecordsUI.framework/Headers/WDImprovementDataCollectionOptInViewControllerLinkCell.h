// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDIMPROVEMENTDATACOLLECTIONOPTINVIEWCONTROLLERLINKCELL_H
#define WDIMPROVEMENTDATACOLLECTIONOPTINVIEWCONTROLLERLINKCELL_H

@class UITableViewCell, UIButton;



@interface WDImprovementDataCollectionOptInViewControllerLinkCell : UITableViewCell

@property (retain, nonatomic) UIButton *linkButton; // ivar: _linkButton


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setupLinkButton;


@end


#endif