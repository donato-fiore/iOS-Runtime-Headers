// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOFEATUREAPPLICATIONSFORACCOUNTIDENTIFIERRESPONSE_H
#define NPKPROTOFEATUREAPPLICATIONSFORACCOUNTIDENTIFIERRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoFeatureApplicationsForAccountIdentifierResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *deprecatedFeatureApplications; // ivar: _deprecatedFeatureApplications
@property (retain, nonatomic) NSMutableArray *featureApplications; // ivar: _featureApplications


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deprecatedFeatureApplicationsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)featureApplicationsAtIndex:(NSUInteger)arg0 ;
-(void)addDeprecatedFeatureApplications:(id)arg0 ;
-(void)addFeatureApplications:(id)arg0 ;
-(void)clearDeprecatedFeatureApplications;
-(void)clearFeatureApplications;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif