// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCCODABLESHAREDSUMMARYRECORD_H
#define HDCLOUDSYNCCODABLESHAREDSUMMARYRECORD_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;



@interface HDCloudSyncCodableSharedSummaryRecord : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *authorizationCategories; // ivar: _authorizationCategories
@property (retain, nonatomic) NSString *compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, nonatomic) BOOL hasCompatibilityVersion;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPackage;
@property (readonly, nonatomic) BOOL hasSummaryData;
@property (readonly, nonatomic) BOOL hasUuid;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *objectTypeIdentifiers; // ivar: _objectTypeIdentifiers
@property (retain, nonatomic) NSString *package; // ivar: _package
@property (retain, nonatomic) NSData *summaryData; // ivar: _summaryData
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid
@property (retain, nonatomic) NSString *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)authorizationCategoriesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)objectTypeIdentifiersAtIndex:(NSUInteger)arg0 ;
-(void)addAuthorizationCategories:(id)arg0 ;
-(void)addObjectTypeIdentifiers:(id)arg0 ;
-(void)clearAuthorizationCategories;
-(void)clearObjectTypeIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif