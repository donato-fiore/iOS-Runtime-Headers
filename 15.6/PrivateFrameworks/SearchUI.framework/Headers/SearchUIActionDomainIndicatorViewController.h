// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIACTIONDOMAININDICATORVIEWCONTROLLER_H
#define SEARCHUIACTIONDOMAININDICATORVIEWCONTROLLER_H



#import "SearchUIAccessoryViewController.h"
#import "SearchUIImageView.h"

@interface SearchUIActionDomainIndicatorViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) SearchUIImageView *view;


+(BOOL)supportsRowModel:(id)arg0 ;
-(NSUInteger)type;
-(id)setupView;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif