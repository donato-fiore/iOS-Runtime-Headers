// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRELECTROCARDIOGRAMREPORTGENERATOR_H
#define HRELECTROCARDIOGRAMREPORTGENERATOR_H

@class NSArray;
@protocol HRElectrocardiogramReportDataSource;

#import <Foundation/Foundation.h>


@interface HRElectrocardiogramReportGenerator : NSObject

@property (readonly, weak, nonatomic) NSObject<HRElectrocardiogramReportDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) CGFloat descriptionTextSizeAdjustment; // ivar: _descriptionTextSizeAdjustment
@property (nonatomic) NSUInteger heartGlyphPositionInFirstSectionText; // ivar: _heartGlyphPositionInFirstSectionText
@property (nonatomic) *CGContext pdfContext; // ivar: _pdfContext
@property (retain, nonatomic) NSArray *waveformPaths; // ivar: _waveformPaths


-(BOOL)_didMultilineBulletFlowIntoSectionThree:(id)arg0 remainingRange:(struct _NSRange )arg1 ;
-(CGFloat)_horizontalSeparatorY;
-(id)_appleWatchModelText;
-(id)_averageHeartRateSectionTitleAttributedTextWithText:(id)arg0 ;
-(id)_averageHeartRateTitleText;
-(id)_birthdateAttributedText;
-(id)_birthdateText;
-(id)_blackColorWithFraction:(CGFloat)arg0 ;
-(id)_bulletedDescriptionAttributedTextWithBullets:(id)arg0 ;
-(id)_bulletedDescriptionTextAttributes;
-(id)_descriptionAttributedTextWithText:(id)arg0 ;
-(id)_footerAttributedText;
-(id)_horizontalChartResolutionText;
-(id)_iOSVersionText;
-(id)_informationalText;
-(id)_leadNameText;
-(id)_nameAttributedText;
-(id)_nameText;
-(id)_rhythmClassificationDescriptionText;
-(id)_rhythmClassificationTitleText;
-(id)_sampleAlgorithmVersionText;
-(id)_sampleDateAttributedText;
-(id)_sampleDateText;
-(id)_samplingRateText;
-(id)_sectionOneAttributedText;
-(id)_sectionThreeAttributedTextWithRemainingSectionTwoAttributedText:(id)arg0 ;
-(id)_sectionTitleAttributedTextWithText:(id)arg0 ;
-(id)_sectionTwoAttributedText;
-(id)_symptomsContinuedTitleText;
-(id)_symptomsDescriptionText;
-(id)_symtpomsTitleText;
-(id)_verticalChartResolutionText;
-(id)_watchOSVersionText;
-(id)generatePDF;
-(id)initWithDataSource:(id)arg0 ;
-(struct CGPoint )_birthdateLeadingOrigin;
-(struct CGPoint )_nameLeadingOrigin;
-(struct CGPoint )_sampleDateTrailingOrigin;
-(struct CGRect )_chartRowOneAxisBox;
-(struct CGRect )_chartRowOneGridBox;
-(struct CGRect )_chartRowThreeAxisBox;
-(struct CGRect )_chartRowThreeGridBox;
-(struct CGRect )_chartRowTwoAxisBox;
-(struct CGRect )_chartRowTwoGridBox;
-(struct CGRect )_footerBox;
-(struct CGRect )_pdfCropBox;
-(struct CGRect )_pdfMediaBox;
-(struct CGRect )_sectionOneBox;
-(struct CGRect )_sectionThreeBox;
-(struct CGRect )_sectionTwoBox;
-(struct _NSRange )_drawAttributedText:(id)arg0 inRect:(struct CGRect )arg1 distanceToFirstBaseline:(CGFloat)arg2 drawHeartGlyph:(BOOL)arg3 mustFitInRect:(BOOL)arg4 ;
-(void)_drawAttributedText:(id)arg0 atOrigin:(struct CGPoint )arg1 leftAligned:(BOOL)arg2 ;
-(void)_drawElectrocardiogramChartWithWaveformPathIndex:(NSInteger)arg0 gridRect:(struct CGRect )arg1 axisRect:(struct CGRect )arg2 axisStartingIndex:(NSInteger)arg3 displayControlSignal:(BOOL)arg4 ;
-(void)_drawHorizontalSeparatorAt:(CGFloat)arg0 ;
-(void)_drawRect:(struct CGRect )arg0 ;
-(void)_drawUIKitContentAtDocumentOrigin:(struct CGPoint )arg0 drawingBlock:(id)arg1 ;


@end


#endif