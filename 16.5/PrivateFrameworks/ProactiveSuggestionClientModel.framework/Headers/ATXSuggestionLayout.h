// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSUGGESTIONLAYOUT_H
#define ATXSUGGESTIONLAYOUT_H

@class NSString, NSArray, NSUUID;
@protocol ATXSuggestionLayoutProtocol, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXSuggestionLayout : NSObject <ATXSuggestionLayoutProtocol, NSCopying>



@property (nonatomic) BOOL confidenceWarrantsSnappingOrNPlusOne; // ivar: _confidenceWarrantsSnappingOrNPlusOne
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *fourByEightSuggestions; // ivar: _fourByEightSuggestions
@property (retain, nonatomic) NSArray *fourByFourSuggestions; // ivar: _fourByFourSuggestions
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLowConfidenceStackRotationForStaleStack; // ivar: _isLowConfidenceStackRotationForStaleStack
@property (nonatomic) BOOL isNPlusOne; // ivar: _isNPlusOne
@property (nonatomic) BOOL isValidForSuggestionsWidget; // ivar: _isValidForSuggestionsWidget
@property (nonatomic) CGFloat layoutScore; // ivar: _layoutScore
@property (readonly, nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (nonatomic) NSUInteger numWidgetsInStack; // ivar: _numWidgetsInStack
@property (retain, nonatomic) NSArray *oneByFourSuggestions; // ivar: _oneByFourSuggestions
@property (retain, nonatomic) NSArray *oneByOneSuggestions; // ivar: _oneByOneSuggestions
@property (retain, nonatomic) NSArray *oneByTwoSuggestions; // ivar: _oneByTwoSuggestions
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *twoByFourSuggestions; // ivar: _twoByFourSuggestions
@property (retain, nonatomic) NSArray *twoByTwoSuggestions; // ivar: _twoByTwoSuggestions
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSUUID *uuidOfHighestConfidenceSuggestion; // ivar: _uuidOfHighestConfidenceSuggestion
@property (retain, nonatomic) NSString *widgetUniqueId; // ivar: _widgetUniqueId


+(BOOL)isCompositeLayout:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)maxSuggestionLayoutTypesForUILayoutType:(NSInteger)arg0 ;
+(id)minSuggestionLayoutTypesForUILayoutType:(NSInteger)arg0 ;
+(id)stringFromUILayoutType:(NSInteger)arg0 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(CGFloat)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isShortcutConversion;
-(NSInteger)_layoutTypeFromProtoLayoutType:(int)arg0 ;
-(id)allSuggestionsInLayout;
-(id)arrayOfJSONFromSuggestionArray:(id)arg0 ;
-(id)compactDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayoutType:(NSInteger)arg0 oneByOneSuggestions:(id)arg1 oneByTwoSuggestions:(id)arg2 twoByTwoSuggestions:(id)arg3 oneByFourSuggestions:(id)arg4 twoByFourSuggestions:(id)arg5 fourByFourSuggestions:(id)arg6 fourByEightSuggestions:(id)arg7 ;
-(id)initWithLayoutType:(NSInteger)arg0 oneByOneSuggestions:(id)arg1 oneByTwoSuggestions:(id)arg2 twoByTwoSuggestions:(id)arg3 oneByFourSuggestions:(id)arg4 twoByFourSuggestions:(id)arg5 fourByFourSuggestions:(id)arg6 fourByEightSuggestions:(id)arg7 uuid:(id)arg8 ;
-(id)initWithLayoutType:(NSInteger)arg0 oneByOneSuggestions:(id)arg1 oneByTwoSuggestions:(id)arg2 twoByTwoSuggestions:(id)arg3 oneByFourSuggestions:(id)arg4 twoByFourSuggestions:(id)arg5 fourByFourSuggestions:(id)arg6 fourByEightSuggestions:(id)arg7 uuid:(id)arg8 layoutScore:(CGFloat)arg9 isValidForSuggestionsWidget:(BOOL)arg10 confidenceWarrantsSnappingOrNPlusOne:(BOOL)arg11 isNPlusOne:(BOOL)arg12 isLowConfidenceStackRotationForStaleStack:(BOOL)arg13 widgetUniqueId:(id)arg14 uuidOfHighestConfidenceSuggestion:(id)arg15 numWidgetsInStack:(NSUInteger)arg16 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonRawData;
-(id)minSuggestionListInLayout;
-(id)proto;
-(id)suggestionWithUUID:(id)arg0 ;
-(int)_protoLayoutTypeFromLayoutType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif