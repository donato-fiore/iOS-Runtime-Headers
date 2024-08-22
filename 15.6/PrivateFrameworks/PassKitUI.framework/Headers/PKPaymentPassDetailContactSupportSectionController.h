// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPASSDETAILCONTACTSUPPORTSECTIONCONTROLLER_H
#define PKPAYMENTPASSDETAILCONTACTSUPPORTSECTIONCONTROLLER_H

@class NSArray, NSString, UIColor;
@protocol PKPaymentPassDetailTableViewSectionController, PKPaymentPassDetailContactSupportSectionControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPaymentPassDetailContactSupportSectionController : NSObject <PKPaymentPassDetailTableViewSectionController>



@property (readonly, nonatomic) NSArray *allSectionIdentifiers; // ivar: _allSectionIdentifiers
@property (nonatomic) NSUInteger contactOption; // ivar: _contactOption
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentPassDetailContactSupportSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText


+(BOOL)validForPaymentPass:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)titleForFooterInSectionIdentifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif