// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIBUTTONITEMVIEWCONTROLLER_H
#define SEARCHUIBUTTONITEMVIEWCONTROLLER_H

@class SFCommandButtonItem, UIView;
@protocol SearchUIFeedbackDelegate;

#import <Foundation/Foundation.h>

#import "SearchUIRowModel.h"

@interface SearchUIButtonItemViewController : NSObject

@property (retain, nonatomic) SFCommandButtonItem *buttonItem; // ivar: _buttonItem
@property (nonatomic) BOOL compact; // ivar: _compact
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (retain, nonatomic) SearchUIRowModel *rowModel; // ivar: _rowModel
@property (retain, nonatomic) UIView *view; // ivar: _view




@end


#endif