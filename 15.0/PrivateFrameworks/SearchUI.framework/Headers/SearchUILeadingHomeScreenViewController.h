// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUILEADINGHOMESCREENVIEWCONTROLLER_H
#define SEARCHUILEADINGHOMESCREENVIEWCONTROLLER_H

@class NSString;
@protocol SearchUIHomeScreenEngagementDelegate;


#import "SearchUILeadingViewController.h"
#import "SearchUIHomeScreenAppIconView.h"

@interface SearchUILeadingHomeScreenViewController : SearchUILeadingViewController <SearchUIHomeScreenEngagementDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SearchUIHomeScreenAppIconView *view;


+(BOOL)supportsRowModel:(id)arg0 ;
-(BOOL)shouldVerticallyCenter;
-(NSUInteger)type;
-(id)setupView;
-(void)deleteIcon:(id)arg0 ;
-(void)didUpdateKeyboardFocusToResult:(id)arg0 cardSection:(id)arg1 ;
-(void)setFeedbackDelegate:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif