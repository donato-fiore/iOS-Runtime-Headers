// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECSFAACTIONTAPTORADAR_H
#define SECSFAACTIONTAPTORADAR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SECSFAActionTapToRadar : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *alert; // ivar: _alert
@property (retain, nonatomic) NSString *componentID; // ivar: _componentID
@property (retain, nonatomic) NSString *componentName; // ivar: _componentName
@property (retain, nonatomic) NSString *componentVersion; // ivar: _componentVersion
@property (readonly, nonatomic) BOOL hasAlert;
@property (readonly, nonatomic) BOOL hasComponentID;
@property (readonly, nonatomic) BOOL hasComponentName;
@property (readonly, nonatomic) BOOL hasComponentVersion;
@property (readonly, nonatomic) BOOL hasRadarDescription;
@property (retain, nonatomic) NSString *radarDescription; // ivar: _radarDescription


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