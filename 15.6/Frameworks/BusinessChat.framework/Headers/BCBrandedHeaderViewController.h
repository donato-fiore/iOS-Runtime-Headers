// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCBRANDEDHEADERVIEWCONTROLLER_H
#define BCBRANDEDHEADERVIEWCONTROLLER_H

@class UIViewController, BCSBusinessItem, UIImageView;
@protocol BCBrandedHeaderViewControllerDelegate;



@interface BCBrandedHeaderViewController : UIViewController

@property (readonly, nonatomic) BCSBusinessItem *businessItem; // ivar: _businessItem
@property (weak, nonatomic) NSObject<BCBrandedHeaderViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImageView *logoImageView; // ivar: _logoImageView


-(id)initWithBusinessItem:(id)arg0 ;
-(void)_fetchLogo;
-(void)viewDidLoad;


@end


#endif