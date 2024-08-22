// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEVIEWCONTROLLERCONFIGURATION_H
#define MUPLACEVIEWCONTROLLERCONFIGURATION_H

@class CNContactNavigationController<CNContactViewControllerPrivateDelegate>, CNContactViewController, UIViewController;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MUPlaceViewControllerConfiguration : NSObject <NSCopying>



@property (weak, nonatomic) CNContactNavigationController<CNContactViewControllerPrivateDelegate> *contactsNavigationController; // ivar: _contactsNavigationController
@property (retain, nonatomic) CNContactViewController *contactsViewController; // ivar: _contactsViewController
@property (retain, nonatomic) UIViewController *headerViewController; // ivar: _headerViewController
@property (nonatomic) NSUInteger options; // ivar: _options


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif