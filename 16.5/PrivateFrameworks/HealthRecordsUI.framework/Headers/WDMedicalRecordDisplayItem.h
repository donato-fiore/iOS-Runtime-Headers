// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDMEDICALRECORDDISPLAYITEM_H
#define WDMEDICALRECORDDISPLAYITEM_H

@class NSAttributedString, UIColor, HKInspectableValueInRange, HKConcept, NSString, UIImage, HKMedicalRecord, HKUIMetricColors, NSNumber;
@protocol HKClinicalBrandable;

#import <Foundation/Foundation.h>

#import "WDMedicalRecordCategorySummary.h"

@interface WDMedicalRecordDisplayItem : NSObject

@property (nonatomic) BOOL actionEnabled; // ivar: _actionEnabled
@property (retain, nonatomic) NSAttributedString *attributedSubtitle; // ivar: _attributedSubtitle
@property (retain, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSObject<HKClinicalBrandable> *brandableObject; // ivar: _brandableObject
@property (weak, nonatomic) WDMedicalRecordCategorySummary *categorySummary; // ivar: _categorySummary
@property (retain, nonatomic) HKInspectableValueInRange *chartValueWithRange; // ivar: _chartValueWithRange
@property (retain, nonatomic) HKConcept *concept; // ivar: _concept
@property (copy, nonatomic) NSString *contextString; // ivar: _contextString
@property (retain, nonatomic) NSString *dateString; // ivar: _dateString
@property (nonatomic) NSInteger displayItemType; // ivar: _displayItemType
@property (nonatomic) NSInteger displayItemType;
@property (nonatomic) BOOL extraTopPadding; // ivar: _extraTopPadding
@property (retain, nonatomic) NSString *headerString; // ivar: _headerString
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIColor *imageColor; // ivar: _imageColor
@property (retain, nonatomic) HKMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) HKUIMetricColors *metricColors; // ivar: _metricColors
@property (retain, nonatomic) NSString *panelName; // ivar: _panelName
@property (nonatomic) NSInteger placement; // ivar: _placement
@property (nonatomic) NSInteger recordCategoryType; // ivar: _recordCategoryType
@property (retain, nonatomic) NSNumber *recordCount; // ivar: _recordCount
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (nonatomic) BOOL separatorHidden; // ivar: _separatorHidden
@property (nonatomic) UIEdgeInsets separatorInsets; // ivar: _separatorInsets
@property (nonatomic) NSInteger separatorStyle; // ivar: _separatorStyle
@property (nonatomic) BOOL showDisclosureIndicator; // ivar: _showDisclosureIndicator
@property (nonatomic) BOOL showSelection; // ivar: _showSelection
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *unitString; // ivar: _unitString
@property (nonatomic) BOOL useRegularFontForSubtitle; // ivar: _useRegularFontForSubtitle
@property (retain, nonatomic) NSString *valueString; // ivar: _valueString


+(id)accountSourceItem;
+(id)conceptCardItemWithCategoryType:(NSInteger)arg0 ;
+(id)conceptHeaderItemWithCategoryType:(NSInteger)arg0 title:(id)arg1 ;
+(id)detailSpinnerItem;
+(id)detailSubtitleItemWithTitle:(id)arg0 subtitle:(id)arg1 ;
+(id)detailSubtitleItemWithTitle:(id)arg0 subtitle:(id)arg1 extraTopPadding:(BOOL)arg2 ;
+(id)detailTitleItem;
+(id)detailTitleItemWithTitle:(id)arg0 subtitle:(id)arg1 ;
+(id)recordCardItem;
+(id)sectionHeaderItem;
+(id)standaloneItem;
+(id)timelineSummaryAppendixItem;
+(id)timelineSummaryCategoryMinimizedItem;
+(id)timelineSummaryCategoryMinimizedItemWithCategoryType:(NSInteger)arg0 ;
+(id)timelineSummaryCategoryTitleItem;
+(id)timelineSummaryCategoryTitleItemWithCategoryType:(NSInteger)arg0 ;
+(id)timelineSummaryDetailCategoryTitleItemWithMedicalRecord:(id)arg0 ;
+(id)timelineSummaryPanelTitleItem;
+(id)timelineSummaryReferenceRangeItem;
+(id)timelineSummarySourceTitleItem;
+(id)timelineSummaryValueItem;
-(id)description;
-(id)init;


@end


#endif