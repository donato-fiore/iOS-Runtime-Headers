// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITABLECONSTANTS_PAD_H
#define UITABLECONSTANTS_PAD_H

@class IOS;



@interface UITableConstants_Pad : IOS



+(id)sharedConstants;
-(BOOL)supportsUserInterfaceStyles;
-(CGFloat)defaultRowHeightForTableView:(id)arg0 ;
-(CGFloat)defaultRowHeightForTableView:(id)arg0 cellStyle:(NSInteger)arg1 ;
-(CGFloat)minimumContentViewHeightForFont:(id)arg0 traitCollection:(id)arg1 ;
-(struct UIEdgeInsets )defaultLayoutMarginsForCell:(id)arg0 inTableView:(id)arg1 ;
-(struct _UITableConstantsBackgroundProperties )defaultCellBackgroundPropertiesForTableViewStyle:(NSInteger)arg0 state:(id)arg1 ;
-(struct _UITableConstantsBackgroundProperties )defaultSidebarCellBackgroundPropertiesWithState:(id)arg0 traitCollection:(id)arg1 isAccompanied:(BOOL)arg2 ;


@end


#endif