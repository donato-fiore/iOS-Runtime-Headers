// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRCMATHEXPRESSION_H
#define SCRCMATHEXPRESSION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "SCRCMathExpression.h"

@interface SCRCMathExpression : NSObject {
    NSUInteger _cachedMaximumDepth;
}


@property (readonly, nonatomic) BOOL beginsWithSpace;
@property (readonly, nonatomic) BOOL canBeUsedWithBase;
@property (readonly, nonatomic) BOOL canBeUsedWithRange;
@property (readonly, nonatomic) BOOL canBeWrappedInLatexMathIndicators;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) BOOL endsWithSpace;
@property (readonly, nonatomic) NSUInteger fractionLevel;
@property (readonly, nonatomic) BOOL hasSimpleArrayOfChildren;
@property (readonly, nonatomic) NSInteger integerValue;
@property (readonly, nonatomic) BOOL isBaseSubSuperscript;
@property (readonly, nonatomic) BOOL isEllipsis;
@property (readonly, nonatomic) BOOL isFenceDelimiter;
@property (readonly, nonatomic) BOOL isFunctionName;
@property (readonly, nonatomic) BOOL isInteger;
@property (readonly, nonatomic) BOOL isMultiRowTable;
@property (readonly, nonatomic) BOOL isNaturalSuperscript;
@property (readonly, nonatomic) BOOL isNumber;
@property (readonly, nonatomic) BOOL isOperationSymbol;
@property (readonly, nonatomic) BOOL isRangeSubSuperscript;
@property (readonly, nonatomic) BOOL isSimpleNumericalFraction;
@property (readonly, nonatomic) BOOL isTermSeparator;
@property (readonly, nonatomic) BOOL isUnlinedFraction;
@property (readonly, nonatomic) BOOL isWordOrAbbreviation;
@property (readonly, nonatomic) NSString *latexFormatStringAsOver;
@property (readonly, nonatomic) NSString *latexFormatStringAsUnder;
@property (weak, nonatomic) SCRCMathExpression *parent; // ivar: _parent
@property (readonly, nonatomic) NSArray *siblings;
@property (readonly, nonatomic) NSArray *subExpressions;


+(Class)_classForExpressionType:(id)arg0 ;
+(id)mathExpressionWithDictionary:(id)arg0 ;
+(void)setPathToSegmentOrderingPlist:(id)arg0 ;
-(BOOL)canFormWordStartingWithExpression:(id)arg0 ;
-(NSUInteger)maximumDepth;
-(NSUInteger)maximumFractionLevelOfSubExpressions;
-(NSUInteger)numberOfTables;
-(id)_scrcBundle;
-(id)arrayWithoutNilsFromFirstChild:(id)arg0 secondChild:(id)arg1 thirdChild:(id)arg2 ;
-(id)dollarCodeDescription;
-(id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg0 numberOfOuterRadicals:(NSUInteger)arg1 ;
-(id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg0 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 openOperator:(id)arg2 openOperatorTreePosition:(id)arg3 closeOperator:(id)arg4 closeOperatorTreePosition:(id)arg5 ;
-(id)fenceDelimiters;
-(id)initWithDictionary:(id)arg0 ;
-(id)latexDescription;
-(id)latexDescriptionForChildrenJoinedByString:(id)arg0 ;
-(id)latexDescriptionInMathMode:(BOOL)arg0 ;
-(id)latexIdentifierForFenceOperator:(id)arg0 isClosingOperator:(BOOL)arg1 ;
-(id)latexIdentifierForIdentifier:(id)arg0 ;
-(id)latexMathModeDescription;
-(id)localizedAttributedStringForKey:(id)arg0 ;
-(id)localizedAttributedStringForKey:(id)arg0 treePosition:(id)arg1 ;
-(id)localizedSegmentOrderingForKey:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 ;
-(id)localizedStringForNumber:(id)arg0 ;
-(id)mathMLString;
-(id)speakableDescription;
-(id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(NSInteger)arg0 ;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 ;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 isPartOfWord:(BOOL)arg2 ;
-(id)speakableSegments:(id)arg0 withLocalizablePrefix:(id)arg1 localizableSuffix:(id)arg2 ;
-(id)speakableSegments:(id)arg0 withPrefix:(id)arg1 suffix:(id)arg2 ;
-(id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 ;
-(id)speakableSegmentsUpToDepth:(NSUInteger)arg0 ;
-(id)speakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 localizablePrefix:(id)arg3 localizableSuffix:(id)arg4 ;
-(id)speakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 prefix:(id)arg3 suffix:(id)arg4 ;
-(id)speakableSummary;
-(void)_applyTreePositionOfOriginalSegment:(id)arg0 toPrefixedOrSuffixedSegment:(id)arg1 ;


@end


#endif