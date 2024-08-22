// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSANALYTICSSAFARIVIEWCONTROLLERTAPPEDONTOOLBARBUTTONEVENT_H
#define WBSANALYTICSSAFARIVIEWCONTROLLERTAPPEDONTOOLBARBUTTONEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariViewControllerTappedOnToolbarButtonEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int button; // ivar: _button
@property (nonatomic) BOOL hasButton;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUsedLongTap;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) BOOL usedLongTap; // ivar: _usedLongTap


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)buttonAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsButton:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif