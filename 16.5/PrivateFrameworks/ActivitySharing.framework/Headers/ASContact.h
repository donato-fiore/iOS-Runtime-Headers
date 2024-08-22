// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCONTACT_H
#define ASCONTACT_H

@class CNContactStore, NSUUID, NSSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ASRelationship.h"

@interface ASContact : NSObject <NSCopying>

 {
    CNContactStore *_contactStore;
}


@property (readonly, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSSet *destinations; // ivar: _destinations
@property (readonly, copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *fullName; // ivar: _fullName
@property (copy, nonatomic) NSString *linkedContactStoreIdentifier; // ivar: _linkedContactStoreIdentifier
@property (readonly, copy, nonatomic) NSString *primaryDestinationForMessaging;
@property (copy, nonatomic) ASRelationship *relationship; // ivar: _relationship
@property (copy, nonatomic) ASRelationship *remoteRelationship; // ivar: _remoteRelationship
@property (copy, nonatomic) NSString *shortName; // ivar: _shortName


+(id)contactWithCodableContact:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContact:(id)arg0 ;
-(id)_bestDestinationForContact:(id)arg0 ;
-(id)_bestDestinationFromKnownDestinations;
-(id)codableContactIncludingCloudKitFields:(BOOL)arg0 ;
-(id)contactStore;
-(id)contactWithKeys:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)setContactStore:(id)arg0 ;


@end


#endif