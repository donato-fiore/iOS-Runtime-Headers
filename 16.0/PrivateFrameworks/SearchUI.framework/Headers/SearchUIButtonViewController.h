// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIBUTTONVIEWCONTROLLER_H
#define SEARCHUIBUTTONVIEWCONTROLLER_H



#import "SearchUILeadingViewController.h"
#import "SearchUIImageButton.h"

@interface SearchUIButtonViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageButton *view;


+(BOOL)supportsRowModel:(id)arg0 ;
-(BOOL)shouldVerticallyCenter;
-(NSUInteger)type;
-(id)setupView;
-(void)buttonPressed;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif