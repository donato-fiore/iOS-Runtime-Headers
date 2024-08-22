// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDVIEWCONTROLLER_H
#define CNVCARDVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString;
@protocol CNContactNavigationControllerDelegate, CNVCardViewControllerDelegate;


#import "CNContactNavigationController.h"

@interface CNVCardViewController : UIViewController <CNContactNavigationControllerDelegate>



@property (readonly, nonatomic) CNContactNavigationController *contactNavigationController;
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNVCardViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)contactNavigationController:(id)arg0 contactViewControllerForContact:(id)arg1 preferredMode:(NSInteger)arg2 ;
-(id)initWithVCardData:(id)arg0 ;
-(void)contactNavigationControllerDidCancel:(id)arg0 ;
-(void)contactNavigationControllerDidComplete:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif