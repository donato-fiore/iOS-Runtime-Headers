// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBPOSTSIRIENGAGEMENTEVENT_H
#define BMPBPOSTSIRIENGAGEMENTEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBPostSiriEngagementEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *action; // ivar: _action
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasIsPostSiriEngagement;
@property (nonatomic) BOOL hasPseDeltaDuration;
@property (nonatomic) BOOL hasPseDeltaSinceUIEnd;
@property (nonatomic) BOOL hasPseDeltaSinceUIStart;
@property (readonly, nonatomic) BOOL hasUiSessionId;
@property (nonatomic) BOOL isPostSiriEngagement; // ivar: _isPostSiriEngagement
@property (retain, nonatomic) NSMutableArray *pseContents; // ivar: _pseContents
@property (nonatomic) CGFloat pseDeltaDuration; // ivar: _pseDeltaDuration
@property (nonatomic) CGFloat pseDeltaSinceUIEnd; // ivar: _pseDeltaSinceUIEnd
@property (nonatomic) CGFloat pseDeltaSinceUIStart; // ivar: _pseDeltaSinceUIStart
@property (retain, nonatomic) NSString *uiSessionId; // ivar: _uiSessionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pseContentsAtIndex:(NSUInteger)arg0 ;
-(void)addPseContents:(id)arg0 ;
-(void)clearPseContents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif