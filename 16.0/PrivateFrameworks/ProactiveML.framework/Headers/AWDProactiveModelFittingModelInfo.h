// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDPROACTIVEMODELFITTINGMODELINFO_H
#define AWDPROACTIVEMODELFITTINGMODELINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDProactiveModelFittingModelInfo : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *version; // ivar: _version


+(id)modelInfoFromPlanId:(id)arg0 ;
+(id)modelInfoFromSessionDescriptor:(id)arg0 ;
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