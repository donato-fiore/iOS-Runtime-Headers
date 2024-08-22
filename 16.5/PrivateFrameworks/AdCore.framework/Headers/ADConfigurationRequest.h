// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADCONFIGURATIONREQUEST_H
#define ADCONFIGURATIONREQUEST_H

@class PBRequest, NSMutableArray, NSData;
@protocol NSCopying;



@interface ADConfigurationRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *currentConfigurations; // ivar: _currentConfigurations
@property (readonly, nonatomic) BOOL hasIAdID;
@property (retain, nonatomic) NSData *iAdID; // ivar: _iAdID


+(Class)currentConfigurationType;
+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentConfigurationAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCurrentConfiguration:(id)arg0 ;
-(void)clearCurrentConfigurations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif