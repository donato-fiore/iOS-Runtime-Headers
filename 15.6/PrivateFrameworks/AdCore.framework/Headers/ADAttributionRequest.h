// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADATTRIBUTIONREQUEST_H
#define ADATTRIBUTIONREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface ADAttributionRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *adMetadata; // ivar: _adMetadata
@property (retain, nonatomic) NSData *anonymousDemandiAdID; // ivar: _anonymousDemandiAdID
@property (nonatomic) BOOL attributedByiTunes; // ivar: _attributedByiTunes
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSData *dPID; // ivar: _dPID
@property (nonatomic) CGFloat downloadClickTimestamp; // ivar: _downloadClickTimestamp
@property (nonatomic) int downloadType; // ivar: _downloadType
@property (readonly, nonatomic) BOOL hasAdMetadata;
@property (readonly, nonatomic) BOOL hasAnonymousDemandiAdID;
@property (nonatomic) BOOL hasAttributedByiTunes;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (readonly, nonatomic) BOOL hasDPID;
@property (nonatomic) BOOL hasDownloadClickTimestamp;
@property (nonatomic) BOOL hasDownloadType;
@property (nonatomic) BOOL hasIAdConversionTimestamp;
@property (readonly, nonatomic) BOOL hasIAdID;
@property (nonatomic) BOOL hasIAdImpressionTimestamp;
@property (nonatomic) BOOL hasPurchaseTimestamp;
@property (nonatomic) BOOL hasRunState;
@property (nonatomic) BOOL hasSearchAdClickTimestamp;
@property (readonly, nonatomic) BOOL hasTiltID;
@property (readonly, nonatomic) BOOL hasToroID;
@property (nonatomic) CGFloat iAdConversionTimestamp; // ivar: _iAdConversionTimestamp
@property (retain, nonatomic) NSData *iAdID; // ivar: _iAdID
@property (nonatomic) CGFloat iAdImpressionTimestamp; // ivar: _iAdImpressionTimestamp
@property (nonatomic) CGFloat purchaseTimestamp; // ivar: _purchaseTimestamp
@property (nonatomic) int runState; // ivar: _runState
@property (nonatomic) CGFloat searchAdClickTimestamp; // ivar: _searchAdClickTimestamp
@property (retain, nonatomic) NSData *tiltID; // ivar: _tiltID
@property (retain, nonatomic) NSData *toroID; // ivar: _toroID


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)downloadTypeAsString:(int)arg0 ;
-(id)runStateAsString:(int)arg0 ;
-(int)StringAsDownloadType:(id)arg0 ;
-(int)StringAsRunState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif