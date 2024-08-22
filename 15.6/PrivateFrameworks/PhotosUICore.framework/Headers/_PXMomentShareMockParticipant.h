// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXMOMENTSHAREMOCKPARTICIPANT_H
#define _PXMOMENTSHAREMOCKPARTICIPANT_H

@class NSString;
@protocol PXCMMInvitationParticipant;

#import <Foundation/Foundation.h>


@interface _PXMomentShareMockParticipant : NSObject <PXCMMInvitationParticipant>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *emailAddressString; // ivar: emailAddressString
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSString *phoneNumberString; // ivar: phoneNumberString
@property (readonly) Class superclass;




@end


#endif