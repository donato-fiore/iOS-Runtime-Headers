// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUILEADINGENCAPSULATEDTEXTVIEWCONTROLLER_H
#define SEARCHUILEADINGENCAPSULATEDTEXTVIEWCONTROLLER_H

@class TLKLabel;


#import "SearchUILeadingViewController.h"

@interface SearchUILeadingEncapsulatedTextViewController : SearchUILeadingViewController

@property (retain) TLKLabel *view;


+(BOOL)supportsRowModel:(id)arg0 ;
-(BOOL)shouldBaselineAlign;
-(id)setupView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif