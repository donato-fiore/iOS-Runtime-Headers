// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBCOVERARTICLEWIDGETVIEW_H
#define NTPBCOVERARTICLEWIDGETVIEW_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBCoverArticleWidgetView : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int coverArticleWidgetArticleCount; // ivar: _coverArticleWidgetArticleCount
@property (retain, nonatomic) NSData *coverArticleWidgetViewingSessionId; // ivar: _coverArticleWidgetViewingSessionId
@property (nonatomic) BOOL hasCoverArticleWidgetArticleCount;
@property (readonly, nonatomic) BOOL hasCoverArticleWidgetViewingSessionId;


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