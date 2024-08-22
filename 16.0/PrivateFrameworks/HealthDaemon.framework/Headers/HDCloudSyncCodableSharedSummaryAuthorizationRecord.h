// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCCODABLESHAREDSUMMARYAUTHORIZATIONRECORD_H
#define HDCLOUDSYNCCODABLESHAREDSUMMARYAUTHORIZATIONRECORD_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface HDCloudSyncCodableSharedSummaryAuthorizationRecord : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *authorizationCategories; // ivar: _authorizationCategories
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)authorizationCategoriesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAuthorizationCategories:(id)arg0 ;
-(void)clearAuthorizationCategories;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif