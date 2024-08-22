// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIAPPCLIPACCESSORYVIEWCONTROLLER_H
#define SEARCHUIAPPCLIPACCESSORYVIEWCONTROLLER_H

@class TLKStoreButton;


#import "SearchUIAccessoryViewController.h"

@interface SearchUIAppClipAccessoryViewController : SearchUIAccessoryViewController

@property (retain) TLKStoreButton *view;


+(BOOL)supportsRowModel:(id)arg0 ;
-(NSUInteger)type;
-(id)setupView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif