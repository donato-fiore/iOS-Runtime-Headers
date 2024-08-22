// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTINFO_H
#define UIPRINTINFO_H

@class NSArray, NSDictionary, NSString;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "UIPrinter.h"
#import "UIPrintPaper.h"

@interface UIPrintInfo : NSObject <NSCopying, NSCoding>



@property (retain, nonatomic) NSArray *appliedPresetsList; // ivar: _appliedPresetsList
@property (nonatomic) NSInteger bookletStyle; // ivar: _bookletStyle
@property (nonatomic) NSInteger borderType; // ivar: _borderType
@property (nonatomic) NSInteger coat; // ivar: _coat
@property (nonatomic) NSInteger copies; // ivar: _copies
@property (retain, nonatomic) UIPrinter *currentPrinter; // ivar: _currentPrinter
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) NSInteger duplex; // ivar: _duplex
@property (nonatomic) NSInteger finishingOption; // ivar: _finishingOption
@property (retain, nonatomic) NSString *finishingTemplate; // ivar: _finishingTemplate
@property (nonatomic) BOOL flipHorizontal; // ivar: _flipHorizontal
@property (nonatomic) NSInteger fold; // ivar: _fold
@property (nonatomic) BOOL imagePDFAnnotations; // ivar: _imagePDFAnnotations
@property (retain, nonatomic) NSString *inputSlot; // ivar: _inputSlot
@property (retain, nonatomic) NSString *jobAccountID; // ivar: _jobAccountID
@property (copy, nonatomic) NSString *jobName; // ivar: _jobName
@property (retain, nonatomic) NSDictionary *jobPreset; // ivar: _jobPreset
@property (nonatomic) NSInteger laminate; // ivar: _laminate
@property (retain, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (nonatomic) NSInteger nUpLayoutDirection; // ivar: _nUpLayoutDirection
@property (retain, nonatomic) NSArray *nUpRowsColumns; // ivar: _nUpRowsColumns
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) NSString *outputBin; // ivar: _outputBin
@property (nonatomic) NSInteger outputType; // ivar: _outputType
@property (nonatomic) NSInteger pageCount; // ivar: _pageCount
@property (retain, nonatomic) NSArray *pageRanges; // ivar: _pageRanges
@property (retain, nonatomic) NSString *pageStackOrder; // ivar: _pageStackOrder
@property (nonatomic) BOOL pdfAnnotationsAvailable; // ivar: _pdfAnnotationsAvailable
@property (retain, nonatomic) NSString *pdfPassword; // ivar: _pdfPassword
@property (retain, nonatomic) UIPrintPaper *printPaper; // ivar: _printPaper
@property (copy, nonatomic) NSString *printerID; // ivar: _printerID
@property (nonatomic) NSInteger punch; // ivar: _punch
@property (nonatomic) NSInteger quality; // ivar: _quality
@property (nonatomic) BOOL scaleDownOnly; // ivar: _scaleDownOnly
@property (nonatomic) BOOL scaleToFit; // ivar: _scaleToFit
@property (nonatomic) BOOL scaleUp; // ivar: _scaleUp
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (nonatomic) NSInteger staple; // ivar: _staple
@property (nonatomic) NSInteger trim; // ivar: _trim


+(id)printInfo;
+(id)printInfoWithDictionary:(id)arg0 ;
-(BOOL)nUpActive;
-(NSInteger)numNUpColumns;
-(NSInteger)numNUpRows;
-(id)_createPrintSettingsForPrinter:(id)arg0 ;
-(id)_initWithDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_updateWithPrinter:(id)arg0 ;
-(void)applyPreset:(id)arg0 ;
-(void)clearPreset:(id)arg0 origPrintInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetToDefaultSettings:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif