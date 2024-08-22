// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPVERIFICATIONMETHODTABLECONTROLLER_H
#define PKPAYMENTSETUPVERIFICATIONMETHODTABLECONTROLLER_H

@class NSString, NSArray;
@protocol UITableViewDelegate, UITableViewDataSource;

#import <Foundation/Foundation.h>

#import "PKActivationMethodTableViewCell.h"
#import "PKPaymentVerificationController.h"

@interface PKPaymentSetupVerificationMethodTableController : NSObject <UITableViewDelegate, UITableViewDataSource>

 {
    PKActivationMethodTableViewCell *_sizingCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger selectedIndex; // ivar: _selectedIndex
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *verificationChannels; // ivar: _verificationChannels
@property (readonly, nonatomic) PKPaymentVerificationController *verificationController; // ivar: _verificationController


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_detailTextLabelForChannel:(id)arg0 ;
-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)initWithVerificationController:(id)arg0 ;
-(id)newVerificationRequest;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif