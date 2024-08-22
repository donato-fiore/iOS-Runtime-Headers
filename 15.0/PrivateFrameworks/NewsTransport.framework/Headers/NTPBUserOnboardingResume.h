// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBUSERONBOARDINGRESUME_H
#define NTPBUSERONBOARDINGRESUME_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBUserOnboardingResume : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasOnboardResumeStage;
@property (retain, nonatomic) NSString *onboardResumeStage; // ivar: _onboardResumeStage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif