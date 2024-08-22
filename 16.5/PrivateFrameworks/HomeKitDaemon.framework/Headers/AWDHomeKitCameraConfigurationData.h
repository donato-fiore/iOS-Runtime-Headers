// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITCAMERACONFIGURATIONDATA_H
#define AWDHOMEKITCAMERACONFIGURATIONDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDHomeKitCameraConfigurationData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsDemoConfiguration;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSMutableArray *homeConfigurations; // ivar: _homeConfigurations
@property (nonatomic) BOOL isDemoConfiguration; // ivar: _isDemoConfiguration
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)homeConfigurationsAtIndex:(NSUInteger)arg0 ;
-(void)addHomeConfigurations:(id)arg0 ;
-(void)clearHomeConfigurations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif