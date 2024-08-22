// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUTABLEVIEW_H
#define SUTABLEVIEW_H

@class UITableView;



@interface SUTableView : UITableView

@property (nonatomic) BOOL allowsHeaderAndFooterToFloat; // ivar: _allowsHeaderAndFooterToFloat


-(BOOL)allowsFooterViewsToFloat;
-(BOOL)allowsHeaderViewsToFloat;


@end


#endif