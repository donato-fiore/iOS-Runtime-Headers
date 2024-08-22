// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPUSERPRIVACYSETTINGSRETRIEVERESPONSE_H
#define CKDPUSERPRIVACYSETTINGSRETRIEVERESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "CKDPUserPrivacySettings.h"

@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *applicationBundles; // ivar: _applicationBundles
@property (readonly, nonatomic) BOOL hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // ivar: _userPrivacySettings


+(Class)applicationBundleType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applicationBundleAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addApplicationBundle:(id)arg0 ;
-(void)clearApplicationBundles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif