// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACDISAMBIGUATIONPRESENTATIONVIEWCONTROLLER_H
#define CACDISAMBIGUATIONPRESENTATIONVIEWCONTROLLER_H

@class UIViewController, UIAlertController, NSString, NSArray;
@protocol CACViewController, CACContactDisambiguationPresentationViewControllerDelegate;



@interface CACDisambiguationPresentationViewController : UIViewController <CACViewController>



@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, nonatomic) NSString *alertTitle; // ivar: _alertTitle
@property (weak, nonatomic) NSObject<CACContactDisambiguationPresentationViewControllerDelegate> *contactDisambiguationDelegate; // ivar: _contactDisambiguationDelegate
@property (retain, nonatomic) NSArray *disambiguationItems; // ivar: _disambiguationItems
@property (readonly, nonatomic) BOOL isOverlay;
@property (readonly, nonatomic) NSInteger zOrder;


-(BOOL)_canShowWhileLocked;
-(id)actionForItem:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 ;
-(id)newActionCustomContentView:(id)arg0 ;
-(id)newAlertControllerWithTitle:(id)arg0 message:(id)arg1 ;
-(void)performHideWithCompletion:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif