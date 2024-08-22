// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBSHAREINFORMATIONSCREENVIEW_H
#define NTPBSHAREINFORMATIONSCREENVIEW_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NTPBShareInformationScreenView : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL arrivedFromAd; // ivar: _arrivedFromAd
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (retain, nonatomic) NSString *errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (nonatomic) BOOL hasArrivedFromAd;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorMessage;
@property (readonly, nonatomic) BOOL hasIadQtoken;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (nonatomic) BOOL hasParentFeedType;
@property (nonatomic) BOOL hasResultType;
@property (readonly, nonatomic) BOOL hasSectionId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasSubscriptionOnlyArticlePreview;
@property (nonatomic) BOOL hasUserAction;
@property (retain, nonatomic) NSString *iadQtoken; // ivar: _iadQtoken
@property (nonatomic) int paidSubscriptionConversionPointType; // ivar: _paidSubscriptionConversionPointType
@property (nonatomic) int parentFeedType; // ivar: _parentFeedType
@property (nonatomic) int resultType; // ivar: _resultType
@property (retain, nonatomic) NSString *sectionId; // ivar: _sectionId
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (nonatomic) BOOL subscriptionOnlyArticlePreview; // ivar: _subscriptionOnlyArticlePreview
@property (nonatomic) int userAction; // ivar: _userAction


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg0 ;
-(id)parentFeedTypeAsString:(int)arg0 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg0 ;
-(int)StringAsParentFeedType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif