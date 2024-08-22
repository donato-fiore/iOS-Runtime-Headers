// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBCOVERARTICLEWIDGETEXPOSURE_H
#define NTPBCOVERARTICLEWIDGETEXPOSURE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBCoverArticleWidgetExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int coverArticleWidgetArticleCount; // ivar: _coverArticleWidgetArticleCount
@property (retain, nonatomic) NSData *coverArticleWidgetExposureSessionId; // ivar: _coverArticleWidgetExposureSessionId
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (nonatomic) BOOL hasCoverArticleWidgetArticleCount;
@property (readonly, nonatomic) BOOL hasCoverArticleWidgetExposureSessionId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;


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