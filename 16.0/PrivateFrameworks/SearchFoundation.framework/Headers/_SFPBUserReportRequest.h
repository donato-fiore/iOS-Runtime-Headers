// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBUSERREPORTREQUEST_H
#define _SFPBUSERREPORTREQUEST_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBUserReportRequest, NSSecureCoding;



@interface _SFPBUserReportRequest : PBCodable <_SFPBUserReportRequest, NSSecureCoding>



@property (copy, nonatomic) NSString *affordanceText; // ivar: _affordanceText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dismissText; // ivar: _dismissText
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int reportType; // ivar: _reportType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSArray *userReportOptions; // ivar: _userReportOptions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)userReportOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addUserReportOptions:(id)arg0 ;
-(void)clearUserReportOptions;
-(void)writeTo:(id)arg0 ;


@end


#endif