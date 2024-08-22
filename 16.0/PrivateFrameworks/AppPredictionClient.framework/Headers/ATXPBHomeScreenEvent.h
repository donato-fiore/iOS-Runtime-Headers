// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBHOMESCREENEVENT_H
#define ATXPBHOMESCREENEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ATXPBHomeScreenEventMetadata.h"

@interface ATXPBHomeScreenEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) NSString *blendingCacheId; // ivar: _blendingCacheId
@property (nonatomic) CGFloat date; // ivar: _date
@property (retain, nonatomic) NSString *eventTypeString; // ivar: _eventTypeString
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (readonly, nonatomic) BOOL hasBlendingCacheId;
@property (nonatomic) BOOL hasDate;
@property (readonly, nonatomic) BOOL hasEventTypeString;
@property (readonly, nonatomic) BOOL hasIntentDescription;
@property (nonatomic) BOOL hasIsSuggestedWidget;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasReason;
@property (readonly, nonatomic) BOOL hasStackId;
@property (nonatomic) BOOL hasStackKind;
@property (nonatomic) BOOL hasStackLocation;
@property (readonly, nonatomic) BOOL hasWidgetBundleId;
@property (readonly, nonatomic) BOOL hasWidgetKind;
@property (nonatomic) BOOL hasWidgetSize;
@property (readonly, nonatomic) BOOL hasWidgetUniqueId;
@property (retain, nonatomic) NSString *intentDescription; // ivar: _intentDescription
@property (nonatomic) BOOL isSuggestedWidget; // ivar: _isSuggestedWidget
@property (retain, nonatomic) ATXPBHomeScreenEventMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSString *stackId; // ivar: _stackId
@property (nonatomic) int stackKind; // ivar: _stackKind
@property (nonatomic) int stackLocation; // ivar: _stackLocation
@property (retain, nonatomic) NSMutableArray *suggestionIds; // ivar: _suggestionIds
@property (retain, nonatomic) NSString *widgetBundleId; // ivar: _widgetBundleId
@property (retain, nonatomic) NSString *widgetKind; // ivar: _widgetKind
@property (nonatomic) int widgetSize; // ivar: _widgetSize
@property (retain, nonatomic) NSString *widgetUniqueId; // ivar: _widgetUniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)stackKindAsString:(int)arg0 ;
-(id)stackLocationAsString:(int)arg0 ;
-(id)suggestionIdsAtIndex:(NSUInteger)arg0 ;
-(id)widgetSizeAsString:(int)arg0 ;
-(int)StringAsStackKind:(id)arg0 ;
-(int)StringAsStackLocation:(id)arg0 ;
-(int)StringAsWidgetSize:(id)arg0 ;
-(void)addSuggestionIds:(id)arg0 ;
-(void)clearSuggestionIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif