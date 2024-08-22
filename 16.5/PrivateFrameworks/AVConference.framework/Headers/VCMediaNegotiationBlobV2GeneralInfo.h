// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATIONBLOBV2GENERALINFO_H
#define VCMEDIANEGOTIATIONBLOBV2GENERALINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface VCMediaNegotiationBlobV2GeneralInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int abSwitches; // ivar: _abSwitches
@property (retain, nonatomic) NSString *cname; // ivar: _cname
@property (readonly, nonatomic) unk creationTime;
@property (nonatomic) BOOL hasAbSwitches;
@property (readonly, nonatomic) BOOL hasCname;
@property (nonatomic) BOOL hasNtpTime;
@property (nonatomic) BOOL hasScreenRes;
@property (nonatomic) NSUInteger ntpTime; // ivar: _ntpTime
@property (nonatomic) unsigned int screenRes; // ivar: _screenRes
@property (readonly, nonatomic) CGSize screenResolution;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
// -(id)initWithCreationTime:(unk)arg0 screenResolution:(NSUInteger)arg1 abSwitches:(struct ? )arg2  ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithLogFile:(*void)arg0 prefix:(id)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif