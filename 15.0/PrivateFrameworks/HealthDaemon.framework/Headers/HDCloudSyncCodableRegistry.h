// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCCODABLEREGISTRY_H
#define HDCLOUDSYNCCODABLEREGISTRY_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "HDCloudSyncCodableProfileIdentifier.h"

@interface HDCloudSyncCodableRegistry : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (retain, nonatomic) NSMutableArray *disabledOwnerIdentifiers; // ivar: _disabledOwnerIdentifiers
@property (retain, nonatomic) NSString *displayFirstName; // ivar: _displayFirstName
@property (retain, nonatomic) NSString *displayLastName; // ivar: _displayLastName
@property (nonatomic) CGFloat displayNameModificationDate; // ivar: _displayNameModificationDate
@property (nonatomic) BOOL hasDeleted;
@property (readonly, nonatomic) BOOL hasDisplayFirstName;
@property (readonly, nonatomic) BOOL hasDisplayLastName;
@property (nonatomic) BOOL hasDisplayNameModificationDate;
@property (readonly, nonatomic) BOOL hasOwnerProfileIdentifier;
@property (readonly, nonatomic) BOOL hasSharedProfileIdentifier;
@property (retain, nonatomic) HDCloudSyncCodableProfileIdentifier *ownerProfileIdentifier; // ivar: _ownerProfileIdentifier
@property (retain, nonatomic) HDCloudSyncCodableProfileIdentifier *sharedProfileIdentifier; // ivar: _sharedProfileIdentifier
@property (retain, nonatomic) NSMutableArray *stores; // ivar: _stores


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)disabledOwnerIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)storesAtIndex:(NSUInteger)arg0 ;
-(void)addDisabledOwnerIdentifiers:(id)arg0 ;
-(void)addStores:(id)arg0 ;
-(void)clearDisabledOwnerIdentifiers;
-(void)clearStores;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif