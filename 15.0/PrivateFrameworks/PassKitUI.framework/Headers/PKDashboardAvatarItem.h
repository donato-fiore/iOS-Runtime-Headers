// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDASHBOARDAVATARITEM_H
#define PKDASHBOARDAVATARITEM_H

@class PKAccountUser, NSString, PKFamilyMember;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardAvatarItem : NSObject <PKDashboardItem>



@property (retain, nonatomic) PKAccountUser *accountUser; // ivar: _accountUser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKFamilyMember *familyMember; // ivar: _familyMember
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)identifier;


@end


#endif