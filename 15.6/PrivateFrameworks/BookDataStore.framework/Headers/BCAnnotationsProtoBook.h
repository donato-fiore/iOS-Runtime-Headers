// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCANNOTATIONSPROTOBOOK_H
#define BCANNOTATIONSPROTOBOOK_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface BCAnnotationsProtoBook : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *annotations; // ivar: _annotations
@property (retain, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (retain, nonatomic) NSString *assetID; // ivar: _assetID
@property (retain, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (readonly, nonatomic) BOOL hasAssetVersion;


+(Class)annotationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)annotationAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAnnotation:(id)arg0 ;
-(void)clearAnnotations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif