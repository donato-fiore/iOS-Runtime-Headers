// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIPROFILESUMMARYCELL_H
#define AAUIPROFILESUMMARYCELL_H

@class UITableViewCell;


#import "AAUIProfileSummaryView.h"

@interface AAUIProfileSummaryCell : UITableViewCell {
    AAUIProfileSummaryView *_contentView;
}




+(CGFloat)desiredHeight;
-(id)initWithName:(id)arg0 email:(id)arg1 image:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif