// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIAUXILIARYTEXTVIEWCONTROLLER_H
#define SEARCHUIAUXILIARYTEXTVIEWCONTROLLER_H

@class TLKAuxilliaryTextView;


#import "SearchUIAccessoryViewController.h"

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) TLKAuxilliaryTextView *auxilliaryTextView; // ivar: _auxilliaryTextView
@property (nonatomic) BOOL shouldCenter; // ivar: _shouldCenter


+(BOOL)supportsRowModel:(id)arg0 ;
-(BOOL)shouldVerticallyCenter;
-(NSUInteger)type;
-(id)setupView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif