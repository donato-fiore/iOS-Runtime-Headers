// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCCODABLEREGISTEREDSTORE_H
#define HDCLOUDSYNCCODABLEREGISTEREDSTORE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDCloudSyncCodableRegisteredStore : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasOwnerIdentifier;
@property (readonly, nonatomic) BOOL hasStoreIdentifier;
@property (retain, nonatomic) NSString *ownerIdentifier; // ivar: _ownerIdentifier
@property (retain, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif