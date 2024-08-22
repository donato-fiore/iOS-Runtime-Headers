// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUSERDEFAULTS_H
#define PXUSERDEFAULTS_H

@class NSNumber, NSString, NSDate;
@protocol PXZoomablePhotosUserDefaults, PXUserDefaultsDataSource;

#import <Foundation/Foundation.h>


@interface PXUserDefaults : NSObject

@property (copy, nonatomic) NSNumber *allPhotosAspectFit; // ivar: _allPhotosAspectFit
@property (copy, nonatomic) NSNumber *allPhotosAspectFitInCompact; // ivar: _allPhotosAspectFitInCompact
@property (copy, nonatomic) NSNumber *allPhotosCaptionsVisible; // ivar: _allPhotosCaptionsVisible
@property (copy, nonatomic) NSNumber *allPhotosColumns; // ivar: _allPhotosColumns
@property (copy, nonatomic) NSNumber *allPhotosPreferredIndividualItemsColumns; // ivar: _allPhotosPreferredIndividualItemsColumns
@property (copy, nonatomic) NSNumber *axExposeAllVisibleElements; // ivar: _axExposeAllVisibleElements
@property (readonly, nonatomic) NSObject<PXZoomablePhotosUserDefaults> *curatedLibraryUserDefaults;
@property (copy, nonatomic) NSNumber *curatedLibraryZoomLevel; // ivar: _curatedLibraryZoomLevel
@property (readonly, weak, nonatomic) NSObject<PXUserDefaultsDataSource> *dataSource; // ivar: _dataSource
@property (copy, nonatomic) NSNumber *daysMarginScale; // ivar: _daysMarginScale
@property (copy, nonatomic) NSNumber *didShowCompletedCurationFooterAnimation; // ivar: _didShowCompletedCurationFooterAnimation
@property (copy, nonatomic) NSNumber *didShowCurationFooter; // ivar: _didShowCurationFooter
@property (copy, nonatomic) NSNumber *includeSharedWithYou; // ivar: _includeSharedWithYou
@property (copy, nonatomic) NSNumber *infoPanelLastSnappedPosition; // ivar: _infoPanelLastSnappedPosition
@property (copy, nonatomic) NSString *infoPanelLastSnappedWidgetIdentifier; // ivar: _infoPanelLastSnappedWidgetIdentifier
@property (copy, nonatomic) NSNumber *lastRadarPromptAnsweredQuestionCount; // ivar: _lastRadarPromptAnsweredQuestionCount
@property (copy, nonatomic) NSDate *lastSurveyQuestionsRadarPromptDate; // ivar: _lastSurveyQuestionsRadarPromptDate
@property (copy, nonatomic) NSNumber *photosGridAspectFit; // ivar: _photosGridAspectFit
@property (copy, nonatomic) NSNumber *photosGridAspectFitInCompact; // ivar: _photosGridAspectFitInCompact
@property (copy, nonatomic) NSNumber *photosGridColumns; // ivar: _photosGridColumns
@property (copy, nonatomic) NSNumber *photosGridPreferredIndividualItemsColumns; // ivar: _photosGridPreferredIndividualItemsColumns
@property (readonly, nonatomic) NSObject<PXZoomablePhotosUserDefaults> *photosGridsUserDefaults;
@property (copy, nonatomic) NSNumber *storyTitleStyleNextIndex; // ivar: _storyTitleStyleNextIndex
@property (copy, nonatomic) NSDate *surveyQuestionsHideDate; // ivar: _surveyQuestionsHideDate


+(id)standardUserDefaults;
-(NSInteger)generateNextStoryTitleStyleIndex;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)setallPhotosAspectFitInCompact:(id)arg0 ;


@end


#endif