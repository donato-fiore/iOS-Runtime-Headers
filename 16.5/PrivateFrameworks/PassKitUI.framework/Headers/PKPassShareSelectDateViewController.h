// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHARESELECTDATEVIEWCONTROLLER_H
#define PKPASSSHARESELECTDATEVIEWCONTROLLER_H

@class NSString;
@protocol PKPassShareSelectDateSectionControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKPassShareSelectDateSectionController.h"

@interface PKPassShareSelectDateViewController : PKPaymentSetupOptionsViewController <PKPassShareSelectDateSectionControllerDelegate>

 {
    PKPassShareSelectDateSectionController *_sectionController;
}


@property (copy, nonatomic) id *dateChangeHandler; // ivar: _dateChangeHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDate:(id)arg0 minimumDate:(id)arg1 maximumDate:(id)arg2 title:(id)arg3 ;
-(void)didUpdateDate:(id)arg0 ;
-(void)reloadDataAnimated:(BOOL)arg0 ;


@end


#endif