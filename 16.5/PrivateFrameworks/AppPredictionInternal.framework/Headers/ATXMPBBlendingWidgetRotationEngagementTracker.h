// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMPBBLENDINGWIDGETROTATIONENGAGEMENTTRACKER_H
#define ATXMPBBLENDINGWIDGETROTATIONENGAGEMENTTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBBlendingWidgetRotationEngagementTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSString *clientModelABGroup; // ivar: _clientModelABGroup
@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (nonatomic) int engagementType; // ivar: _engagementType
@property (retain, nonatomic) NSString *executableType; // ivar: _executableType
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (readonly, nonatomic) BOOL hasClientModelABGroup;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (nonatomic) BOOL hasEngagementType;
@property (readonly, nonatomic) BOOL hasExecutableType;
@property (readonly, nonatomic) BOOL hasHighestConfidenceCategory;
@property (readonly, nonatomic) BOOL hasLayoutType;
@property (nonatomic) BOOL hasSelectionType;
@property (nonatomic) BOOL hasStackLocation;
@property (readonly, nonatomic) BOOL hasWidgetIdentifier;
@property (retain, nonatomic) NSString *highestConfidenceCategory; // ivar: _highestConfidenceCategory
@property (retain, nonatomic) NSString *layoutType; // ivar: _layoutType
@property (nonatomic) int selectionType; // ivar: _selectionType
@property (nonatomic) int stackLocation; // ivar: _stackLocation
@property (retain, nonatomic) NSString *widgetIdentifier; // ivar: _widgetIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)engagementTypeAsString:(int)arg0 ;
-(id)selectionTypeAsString:(int)arg0 ;
-(id)stackLocationAsString:(int)arg0 ;
-(int)StringAsEngagementType:(id)arg0 ;
-(int)StringAsSelectionType:(id)arg0 ;
-(int)StringAsStackLocation:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif