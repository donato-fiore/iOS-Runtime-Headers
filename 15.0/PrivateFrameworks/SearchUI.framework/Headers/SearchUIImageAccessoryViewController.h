// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIIMAGEACCESSORYVIEWCONTROLLER_H
#define SEARCHUIIMAGEACCESSORYVIEWCONTROLLER_H



#import "SearchUIAccessoryViewController.h"
#import "SearchUIImageView.h"

@interface SearchUIImageAccessoryViewController : SearchUIAccessoryViewController

@property (retain) SearchUIImageView *view;


+(BOOL)supportsRowModel:(id)arg0 ;
-(id)setupView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif