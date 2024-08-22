// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCLOUDCONTENTTASTEPBFUSEPREFERENCES_H
#define ICCLOUDCONTENTTASTEPBFUSEPREFERENCES_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ICCloudContentTastePBFusePreferences : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *preferences; // ivar: _preferences


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)preferencesAtIndex:(NSUInteger)arg0 ;
-(void)addPreferences:(id)arg0 ;
-(void)clearPreferences;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif