// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDATATABLEVIEW_H
#define SXDATATABLEVIEW_H

@class NSMutableDictionary;
@protocol SXDataTableViewDataSource, SXDataTableDataSource;


#import "SXDataTableDrawView.h"
#import "SXDataTableBlueprint.h"

@interface SXDataTableView : SXDataTableDrawView {
    id<SXDataTableViewDataSource> *_viewDataSource;
    id<SXDataTableDataSource> *_dataSource;
    SXDataTableBlueprint *_blueprint;
    NSMutableDictionary *_rowViews;
    NSMutableDictionary *_columnViews;
}




-(struct CGPoint )originOffset;


@end


#endif