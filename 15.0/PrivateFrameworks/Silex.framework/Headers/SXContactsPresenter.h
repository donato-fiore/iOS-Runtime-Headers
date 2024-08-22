// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCONTACTSPRESENTER_H
#define SXCONTACTSPRESENTER_H

@class CNContactStore, NSString, UIViewController;
@protocol CNContactViewControllerDelegate, SXContactsPresenter, SXViewControllerPresenting;

#import <Foundation/Foundation.h>


@interface SXContactsPresenter : NSObject <CNContactViewControllerDelegate, SXContactsPresenter>



@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXViewControllerPresenting> *viewControllerPresenting; // ivar: _viewControllerPresenting


-(id)initWithViewControllerPresenting:(id)arg0 contactStore:(id)arg1 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)dismissPresentedViewController;
-(void)presentContact:(id)arg0 ;


@end


#endif