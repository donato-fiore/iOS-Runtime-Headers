// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXINVITATIONRECIPIENT_H
#define PXINVITATIONRECIPIENT_H

@class CNComposeRecipient, NSString, NSArray;
@protocol PLSInvitationRecipient;

#import <Foundation/Foundation.h>


@interface PXInvitationRecipient : NSObject <PLSInvitationRecipient>

 {
    CNComposeRecipient *_recipient;
    NSString *_firstName;
    NSString *_lastName;
}


@property (readonly, nonatomic) NSArray *allEmails; // ivar: _allEmails
@property (readonly, nonatomic) NSArray *allPhones; // ivar: _allPhones
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *invalidAddressString; // ivar: _invalidAddressString
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *selectedEmailString; // ivar: _selectedEmailString
@property (readonly, copy, nonatomic) NSString *selectedPhoneString; // ivar: _selectedPhoneString
@property (readonly) Class superclass;


+(id)_validEmailAddressFromComposeRecipient:(id)arg0 ;
+(id)_validPhoneNumberFromString:(id)arg0 ;
-(id)init;
-(id)initWithRecipient:(id)arg0 ;


@end


#endif