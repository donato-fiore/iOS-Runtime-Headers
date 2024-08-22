// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGSWVERSIONDETAILCELL_H
#define PSGSWVERSIONDETAILCELL_H

@class PSTableCell, SUDocumentationData, NSString, UILabel, PSWebContainerView, UIView, SUManagerClient;



@interface PSGSWVersionDetailCell : PSTableCell {
    SUDocumentationData *_documentationData;
    NSString *_buildVersion;
    int _osUpdateType;
    UILabel *_titleLabelView;
    PSWebContainerView *_releaseNotesSummaryView;
    UIView *_revokedSplatView;
    SUManagerClient *_suClient;
}




-(CGFloat)preferredHeightWithTable:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)preparingRollbackString;
-(id)releaseNotesSummary;
-(id)releaseNotesSummaryString;
-(id)releaseNotesSummaryView;
-(id)revokedSplatView;
-(id)systemVersionValueForKey:(id)arg0 ;
-(id)titleLabelString;
-(id)titleLabelView;
-(void)configureContentView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif