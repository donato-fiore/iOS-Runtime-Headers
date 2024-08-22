// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUILEADINGENCAPSULATEDTEXTVIEWCONTROLLER_H
#define SEARCHUILEADINGENCAPSULATEDTEXTVIEWCONTROLLER_H



#import "SearchUILeadingViewController.h"
#import "SearchUILabel.h"

@interface SearchUILeadingEncapsulatedTextViewController : SearchUILeadingViewController

@property (retain) SearchUILabel *view;


+(BOOL)supportsRowModel:(id)arg0 ;
-(BOOL)shouldCenterAlignToTitle;
-(id)setupView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif