// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITABLEVIEWINDEXOVERLAYINDICATORVIEW_H
#define UITABLEVIEWINDEXOVERLAYINDICATORVIEW_H

@class NSString;


#import "UIView.h"
#import "UILabel.h"
#import "UITapGestureRecognizer.h"
#import "UITableView.h"

@interface UITableViewIndexOverlayIndicatorView : UIView {
    UILabel *_label;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITableView *_table;
}


@property (copy, nonatomic) NSString *currentText;


-(id)initWithTable:(id)arg0 ;
-(void)_tapGestureChanged:(id)arg0 ;
-(void)_willChangeToIdiom:(NSInteger)arg0 onScreen:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif