// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAFAMILYMEMBER_H
#define AAFAMILYMEMBER_H

@class NSString, NSDate, NSNumber;

#import <Foundation/Foundation.h>


@interface AAFamilyMember : NSObject

@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (nonatomic) BOOL areParentalControlsEnabled; // ivar: _areParentalControlsEnabled
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) NSString *iTunesNotLinkedMessage; // ivar: _iTunesNotLinkedMessage
@property (nonatomic) BOOL isAskToBuyEnabled; // ivar: _isAskToBuyEnabled
@property (nonatomic) BOOL isChild; // ivar: _isChild
@property (nonatomic) BOOL isMe; // ivar: _isMe
@property (nonatomic) BOOL isOrganizer; // ivar: _isOrganizer
@property (nonatomic) BOOL isSharingPurchases; // ivar: _isSharingPurchases
@property (copy, nonatomic) NSDate *joinDate; // ivar: _joinDate
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (copy, nonatomic) NSString *linkediTunesAppleID; // ivar: _linkediTunesAppleID
@property (copy, nonatomic) NSNumber *linkediTunesDSID; // ivar: _linkediTunesDSID
@property (copy, nonatomic) NSNumber *personID; // ivar: _personID
@property (copy, nonatomic) NSString *personIDHash; // ivar: _personIDHash
@property (copy, nonatomic) NSString *title; // ivar: _title




@end


#endif