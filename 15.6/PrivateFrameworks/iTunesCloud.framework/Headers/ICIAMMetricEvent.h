// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICIAMMETRICEVENT_H
#define ICIAMMETRICEVENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "ICIAMImpressionNode.h"

@interface ICIAMMetricEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *actionDetails; // ivar: _actionDetails
@property (nonatomic) int actionType; // ivar: _actionType
@property (retain, nonatomic) NSString *actionURL; // ivar: _actionURL
@property (retain, nonatomic) NSString *eventType; // ivar: _eventType
@property (nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) BOOL hasActionURL;
@property (readonly, nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasImpression;
@property (readonly, nonatomic) BOOL hasImpressionType;
@property (readonly, nonatomic) BOOL hasPageId;
@property (nonatomic) BOOL hasPageType;
@property (readonly, nonatomic) BOOL hasPageUrl;
@property (readonly, nonatomic) BOOL hasTargetId;
@property (nonatomic) BOOL hasTargetType;
@property (retain, nonatomic) ICIAMImpressionNode *impression; // ivar: _impression
@property (retain, nonatomic) NSString *impressionType; // ivar: _impressionType
@property (retain, nonatomic) NSMutableArray *pageDetails; // ivar: _pageDetails
@property (retain, nonatomic) NSString *pageId; // ivar: _pageId
@property (nonatomic) int pageType; // ivar: _pageType
@property (retain, nonatomic) NSString *pageUrl; // ivar: _pageUrl
@property (retain, nonatomic) NSString *targetId; // ivar: _targetId
@property (nonatomic) int targetType; // ivar: _targetType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionDetailsAtIndex:(NSUInteger)arg0 ;
-(id)actionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pageDetailsAtIndex:(NSUInteger)arg0 ;
-(id)pageTypeAsString:(int)arg0 ;
-(id)targetTypeAsString:(int)arg0 ;
-(int)StringAsActionType:(id)arg0 ;
-(int)StringAsPageType:(id)arg0 ;
-(int)StringAsTargetType:(id)arg0 ;
-(void)addActionDetails:(id)arg0 ;
-(void)addPageDetails:(id)arg0 ;
-(void)clearActionDetails;
-(void)clearPageDetails;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif