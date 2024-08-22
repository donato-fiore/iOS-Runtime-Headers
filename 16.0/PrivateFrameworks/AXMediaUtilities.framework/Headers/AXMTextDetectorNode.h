// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMTEXTDETECTORNODE_H
#define AXMTEXTDETECTORNODE_H

@class NSArray;
@protocol NSSecureCoding;


#import "AXMEvaluationNode.h"
#import "AXMSemanticTextFactory.h"
#import "AXMTextSpecialCase.h"
#import "AXMTextLayoutManager.h"

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding>



@property (retain, nonatomic) NSArray *sceneLabelsForOCRDocumentTypeDetection; // ivar: _sceneLabelsForOCRDocumentTypeDetection
@property (retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory; // ivar: _semanticTextFactory
@property (retain, nonatomic) AXMTextSpecialCase *specialCaseManager; // ivar: _specialCaseManager
@property (retain, nonatomic) AXMTextLayoutManager *textLayoutManager; // ivar: _textLayoutManager


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(NSInteger)recognitionLevelFromOptions:(id)arg0 ;
+(id)effectiveLanguagesFromOptions:(id)arg0 ;
+(id)filterPreferredDetectionLanguages:(id)arg0 withSupportedDetectionLanguages:(id)arg1 ;
+(id)supportedDetectionLanguagesForLevel:(NSInteger)arg0 ;
+(id)textDetectionLanguagesFromOptions:(id)arg0 ;
+(id)title;
-(BOOL)requiresVisionFramework;
-(BOOL)shouldEvaluate:(id)arg0 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(CGFloat)detectTextSkew:(id)arg0 ;
-(id)_sequencesForObservations:(id)arg0 canvasSize:(struct CGSize )arg1 ;
-(id)_textDetectionOptions:(id)arg0 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;
-(void)nodeInitialize;


@end


#endif