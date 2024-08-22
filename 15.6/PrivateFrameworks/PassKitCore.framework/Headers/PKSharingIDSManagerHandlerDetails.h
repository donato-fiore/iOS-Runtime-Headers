// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHARINGIDSMANAGERHANDLERDETAILS_H
#define PKSHARINGIDSMANAGERHANDLERDETAILS_H


#import <Foundation/Foundation.h>

#import "PKAccountUser.h"
#import "PKFamilyMember.h"

@interface PKSharingIDSManagerHandlerDetails : NSObject

@property (readonly, nonatomic) PKAccountUser *accountUser; // ivar: _accountUser
@property (readonly, nonatomic) PKFamilyMember *familyMember; // ivar: _familyMember


-(id)aliases;
-(id)allHandles;
-(id)description;
-(id)initWithFamilyMember:(id)arg0 ;
-(id)initWithFamilyMember:(id)arg0 accountUser:(id)arg1 ;
-(id)primaryAppleID;


@end


#endif