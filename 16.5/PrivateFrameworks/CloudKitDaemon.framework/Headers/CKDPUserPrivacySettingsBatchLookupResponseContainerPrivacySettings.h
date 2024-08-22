// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPUSERPRIVACYSETTINGSBATCHLOOKUPRESPONSECONTAINERPRIVACYSETTINGS_H
#define CKDPUSERPRIVACYSETTINGSBATCHLOOKUPRESPONSECONTAINERPRIVACYSETTINGS_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "CKDPUserPrivacySettings.h"

@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *applicationBundles; // ivar: _applicationBundles
@property (retain, nonatomic) NSString *applicationContainer; // ivar: _applicationContainer
@property (nonatomic) int applicationContainerEnvironment; // ivar: _applicationContainerEnvironment
@property (readonly, nonatomic) BOOL hasApplicationContainer;
@property (nonatomic) BOOL hasApplicationContainerEnvironment;
@property (readonly, nonatomic) BOOL hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // ivar: _userPrivacySettings


+(Class)applicationBundleType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applicationBundleAtIndex:(NSUInteger)arg0 ;
-(id)applicationContainerEnvironmentAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsApplicationContainerEnvironment:(id)arg0 ;
-(void)addApplicationBundle:(id)arg0 ;
-(void)clearApplicationBundles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif