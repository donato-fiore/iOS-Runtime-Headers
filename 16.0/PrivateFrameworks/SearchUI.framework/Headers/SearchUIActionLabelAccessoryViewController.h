// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIACTIONLABELACCESSORYVIEWCONTROLLER_H
#define SEARCHUIACTIONLABELACCESSORYVIEWCONTROLLER_H

@class TLKStoreButton;


#import "SearchUIAccessoryViewController.h"

@interface SearchUIActionLabelAccessoryViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) TLKStoreButton *view;


+(BOOL)supportsRowModel:(id)arg0 ;
-(id)setupView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif