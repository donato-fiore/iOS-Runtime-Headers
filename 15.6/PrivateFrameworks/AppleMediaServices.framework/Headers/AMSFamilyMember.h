// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSFAMILYMEMBER_H
#define AMSFAMILYMEMBER_H

@class NSDictionary, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface AMSFamilyMember : NSObject

@property (readonly, nonatomic, getter=isAskToBuyEnabled) BOOL askToBuyEnabled; // ivar: _askToBuyEnabled
@property (nonatomic, getter=isCurrentSignedInUser) BOOL currentSignedInUser; // ivar: _currentSignedInUser
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) NSNumber *iCloudDSID; // ivar: _iCloudDSID
@property (readonly, nonatomic) NSString *iCloudUsername; // ivar: _iCloudUsername
@property (readonly, nonatomic) NSNumber *iTunesDSID; // ivar: _iTunesDSID
@property (readonly, nonatomic) NSString *iTunesUsername; // ivar: _iTunesUsername
@property (readonly, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic, getter=isSharingPurchases) BOOL sharingPurchases; // ivar: _sharingPurchases


-(id)description;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif