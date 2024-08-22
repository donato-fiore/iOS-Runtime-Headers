// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBHOMESCREENEVENTMETADATA_H
#define ATXPBHOMESCREENEVENTMETADATA_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "ATXPBCGRectWrapper.h"

@interface ATXPBHomeScreenEventMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *bundleIds; // ivar: _bundleIds
@property (retain, nonatomic) NSString *engagedUrl; // ivar: _engagedUrl
@property (readonly, nonatomic) BOOL hasEngagedUrl;
@property (nonatomic) BOOL hasIsStalenessRotation;
@property (nonatomic) BOOL hasIsSuggestionInAddWidgetSheet;
@property (nonatomic) BOOL hasIsWidgetInTodayView;
@property (nonatomic) BOOL hasPageIndex;
@property (nonatomic) BOOL hasSuggestedPageType;
@property (readonly, nonatomic) BOOL hasVisibleRect;
@property (nonatomic) BOOL isStalenessRotation; // ivar: _isStalenessRotation
@property (nonatomic) BOOL isSuggestionInAddWidgetSheet; // ivar: _isSuggestionInAddWidgetSheet
@property (nonatomic) BOOL isWidgetInTodayView; // ivar: _isWidgetInTodayView
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (retain, nonatomic) NSMutableArray *stackIds; // ivar: _stackIds
@property (nonatomic) int suggestedPageType; // ivar: _suggestedPageType
@property (retain, nonatomic) ATXPBCGRectWrapper *visibleRect; // ivar: _visibleRect
@property (retain, nonatomic) NSMutableArray *widgetIdentifiables; // ivar: _widgetIdentifiables
@property (retain, nonatomic) NSMutableArray *widgetInStackIdentifiables; // ivar: _widgetInStackIdentifiables


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bundleIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)stackIdsAtIndex:(NSUInteger)arg0 ;
-(id)suggestedPageTypeAsString:(int)arg0 ;
-(id)widgetIdentifiablesAtIndex:(NSUInteger)arg0 ;
-(id)widgetInStackIdentifiablesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsSuggestedPageType:(id)arg0 ;
-(void)addBundleIds:(id)arg0 ;
-(void)addStackIds:(id)arg0 ;
-(void)addWidgetIdentifiables:(id)arg0 ;
-(void)addWidgetInStackIdentifiables:(id)arg0 ;
-(void)clearBundleIds;
-(void)clearStackIds;
-(void)clearWidgetIdentifiables;
-(void)clearWidgetInStackIdentifiables;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif