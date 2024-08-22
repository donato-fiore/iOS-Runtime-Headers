// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGSTATEMAPLAUNCH_H
#define GEOLOGMSGSTATEMAPLAUNCH_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOLogMsgStateMapLaunch : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_launchUri;
    NSString *_referringWebsite;
    NSString *_sourceAppId;
    NSString *_sourceHandoffDevice;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _launchActionInternal;
    int _launchAction;
    BOOL _isHandoff;
    ? _flags;
}


@property (nonatomic) BOOL hasIsHandoff;
@property (nonatomic) BOOL hasLaunchAction;
@property (nonatomic) BOOL hasLaunchActionInternal;
@property (readonly, nonatomic) BOOL hasLaunchUri;
@property (readonly, nonatomic) BOOL hasReferringWebsite;
@property (readonly, nonatomic) BOOL hasSourceAppId;
@property (readonly, nonatomic) BOOL hasSourceHandoffDevice;
@property (nonatomic) BOOL isHandoff;
@property (nonatomic) int launchAction;
@property (nonatomic) int launchActionInternal;
@property (retain, nonatomic) NSString *launchUri;
@property (retain, nonatomic) NSString *referringWebsite;
@property (retain, nonatomic) NSString *sourceAppId;
@property (retain, nonatomic) NSString *sourceHandoffDevice;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)launchActionAsString:(int)arg0 ;
-(id)launchActionInternalAsString:(int)arg0 ;
-(int)StringAsLaunchAction:(id)arg0 ;
-(int)StringAsLaunchActionInternal:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif