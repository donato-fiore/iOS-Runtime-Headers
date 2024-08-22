// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPRIVACYREPORTOVERVIEWVIEW_H
#define SFPRIVACYREPORTOVERVIEWVIEW_H

@protocol WBSPrivacyReportDataProvider;


#import "SFPrivacyReportGridView.h"
#import "SFPrivacyReportOverviewCellContentView.h"

@interface SFPrivacyReportOverviewView : SFPrivacyReportGridView {
    id<WBSPrivacyReportDataProvider> *_reportDataProvider;
    SFPrivacyReportOverviewCellContentView *_trackersPreventedFromProfilingView;
    SFPrivacyReportOverviewCellContentView *_websitesContainingTrackersView;
    SFPrivacyReportOverviewCellContentView *_mostBlockedTrackerView;
}


@property (nonatomic) BOOL usesInsetStyle; // ivar: _usesInsetStyle


-(BOOL)itemViewCanUseCompactWidth:(id)arg0 ;
-(BOOL)itemViewIsLineBreak:(id)arg0 ;
-(CGFloat)interItemSpacing;
-(id)initWithPrivacyReportDataProvider:(id)arg0 ;


@end


#endif