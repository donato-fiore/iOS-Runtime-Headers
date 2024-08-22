// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADUSERTRANSPARENCYREQUEST_H
#define ADUSERTRANSPARENCYREQUEST_H

@class PBRequest, NSData, NSString;
@protocol NSCopying;



@interface ADUserTransparencyRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *contentiAdID; // ivar: _contentiAdID
@property (retain, nonatomic) NSData *dPID; // ivar: _dPID
@property (readonly, nonatomic) BOOL hasContentiAdID;
@property (readonly, nonatomic) BOOL hasDPID;
@property (readonly, nonatomic) BOOL hasIAdID;
@property (readonly, nonatomic) BOOL hasITunesStore;
@property (nonatomic) BOOL hasIsSignedInToiTunes;
@property (nonatomic) BOOL hasLimitAdTracking;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (retain, nonatomic) NSData *iAdID; // ivar: _iAdID
@property (retain, nonatomic) NSString *iTunesStore; // ivar: _iTunesStore
@property (nonatomic) BOOL isSignedInToiTunes; // ivar: _isSignedInToiTunes
@property (nonatomic) BOOL limitAdTracking; // ivar: _limitAdTracking
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier


+(id)options;
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