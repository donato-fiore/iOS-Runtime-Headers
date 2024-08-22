// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBUSERACTIVITYDATA_H
#define _SFPBUSERACTIVITYDATA_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBUserActivityData, NSSecureCoding;



@interface _SFPBUserActivityData : PBCodable <_SFPBUserActivityData, NSSecureCoding>



@property (copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *userInfos; // ivar: _userInfos


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)userInfoCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)userInfoAtIndex:(NSUInteger)arg0 ;
-(void)addUserInfo:(id)arg0 ;
-(void)clearUserInfo;
-(void)setUserInfo:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif