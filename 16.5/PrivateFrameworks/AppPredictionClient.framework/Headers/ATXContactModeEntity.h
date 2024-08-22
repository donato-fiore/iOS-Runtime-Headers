// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTACTMODEENTITY_H
#define ATXCONTACTMODEENTITY_H

@class NSString;
@protocol ATXModeEntityProtocol;

#import <Foundation/Foundation.h>

#import "ATXModeEntityScore.h"

@interface ATXContactModeEntity : NSObject <ATXModeEntityProtocol>



@property (retain, nonatomic) NSString *cnContactId; // ivar: _cnContactId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *rawIdentifier; // ivar: _rawIdentifier
@property (retain, nonatomic) ATXModeEntityScore *scoreMetadata; // ivar: scoreMetadata
@property (retain, nonatomic) NSString *stableContactIdentifier; // ivar: _stableContactIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)vipContactEmailAddresses;
-(BOOL)isEmergencyContactGivenCNContactIdsOfEmergencyContacts:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFavoriteContactGivenCNContactIdsOfFavorites:(id)arg0 ;
-(BOOL)isICloudFamilyMemberGivenCNContactIdsOfICloudFamilyMembers:(id)arg0 ;
-(BOOL)isVIPContactGivenVIPs:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 rawIdentifier:(id)arg1 cnContactId:(id)arg2 ;
-(id)initWithDisplayName:(id)arg0 rawIdentifier:(id)arg1 cnContactId:(id)arg2 stableContactIdentifier:(id)arg3 ;
-(id)jsonDict;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif