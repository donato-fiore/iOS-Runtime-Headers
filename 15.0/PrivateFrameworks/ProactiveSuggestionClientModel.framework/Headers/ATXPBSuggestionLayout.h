// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPBSUGGESTIONLAYOUT_H
#define ATXPBSUGGESTIONLAYOUT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface ATXPBSuggestionLayout : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL confidenceWarrantsSnappingOrNPlusOne; // ivar: _confidenceWarrantsSnappingOrNPlusOne
@property (retain, nonatomic) NSMutableArray *fourByEightSuggestions; // ivar: _fourByEightSuggestions
@property (retain, nonatomic) NSMutableArray *fourByFourSuggestions; // ivar: _fourByFourSuggestions
@property (nonatomic) BOOL hasConfidenceWarrantsSnappingOrNPlusOne;
@property (nonatomic) BOOL hasIsLowConfidenceStackRotationForStaleStack;
@property (nonatomic) BOOL hasIsNPlusOne;
@property (nonatomic) BOOL hasIsValidForSuggestionsWidget;
@property (nonatomic) BOOL hasLayoutScore;
@property (nonatomic) BOOL hasLayoutType;
@property (nonatomic) BOOL hasNumWidgetsInStack;
@property (readonly, nonatomic) BOOL hasUuidOfHighestConfidenceSuggestion;
@property (readonly, nonatomic) BOOL hasUuidString;
@property (readonly, nonatomic) BOOL hasWidgetUniqueId;
@property (nonatomic) BOOL isLowConfidenceStackRotationForStaleStack; // ivar: _isLowConfidenceStackRotationForStaleStack
@property (nonatomic) BOOL isNPlusOne; // ivar: _isNPlusOne
@property (nonatomic) BOOL isValidForSuggestionsWidget; // ivar: _isValidForSuggestionsWidget
@property (nonatomic) CGFloat layoutScore; // ivar: _layoutScore
@property (nonatomic) int layoutType; // ivar: _layoutType
@property (nonatomic) NSUInteger numWidgetsInStack; // ivar: _numWidgetsInStack
@property (retain, nonatomic) NSMutableArray *oneByFourSuggestions; // ivar: _oneByFourSuggestions
@property (retain, nonatomic) NSMutableArray *oneByOneSuggestions; // ivar: _oneByOneSuggestions
@property (retain, nonatomic) NSMutableArray *oneByTwoSuggestions; // ivar: _oneByTwoSuggestions
@property (retain, nonatomic) NSMutableArray *twoByFourSuggestions; // ivar: _twoByFourSuggestions
@property (retain, nonatomic) NSMutableArray *twoByTwoSuggestions; // ivar: _twoByTwoSuggestions
@property (retain, nonatomic) NSString *uuidOfHighestConfidenceSuggestion; // ivar: _uuidOfHighestConfidenceSuggestion
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString
@property (retain, nonatomic) NSString *widgetUniqueId; // ivar: _widgetUniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fourByEightSuggestionsAtIndex:(NSUInteger)arg0 ;
-(id)fourByFourSuggestionsAtIndex:(NSUInteger)arg0 ;
-(id)layoutTypeAsString:(int)arg0 ;
-(id)oneByFourSuggestionsAtIndex:(NSUInteger)arg0 ;
-(id)oneByOneSuggestionsAtIndex:(NSUInteger)arg0 ;
-(id)oneByTwoSuggestionsAtIndex:(NSUInteger)arg0 ;
-(id)twoByFourSuggestionsAtIndex:(NSUInteger)arg0 ;
-(id)twoByTwoSuggestionsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsLayoutType:(id)arg0 ;
-(void)addFourByEightSuggestions:(id)arg0 ;
-(void)addFourByFourSuggestions:(id)arg0 ;
-(void)addOneByFourSuggestions:(id)arg0 ;
-(void)addOneByOneSuggestions:(id)arg0 ;
-(void)addOneByTwoSuggestions:(id)arg0 ;
-(void)addTwoByFourSuggestions:(id)arg0 ;
-(void)addTwoByTwoSuggestions:(id)arg0 ;
-(void)clearFourByEightSuggestions;
-(void)clearFourByFourSuggestions;
-(void)clearOneByFourSuggestions;
-(void)clearOneByOneSuggestions;
-(void)clearOneByTwoSuggestions;
-(void)clearTwoByFourSuggestions;
-(void)clearTwoByTwoSuggestions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif