// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUITHUMBNAILVIEWCONTROLLER_H
#define SEARCHUITHUMBNAILVIEWCONTROLLER_H



#import "SearchUILeadingViewController.h"
#import "SearchUIImageView.h"

@interface SearchUIThumbnailViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageView *view;


+(BOOL)rowModelHasSuggestionThumbnail:(id)arg0 ;
+(BOOL)supportsRowModel:(id)arg0 ;
-(BOOL)shouldVerticallyCenter;
-(NSUInteger)type;
-(id)setupView;
-(void)applyImageConstraints;
-(void)setUsesCompactWidth:(BOOL)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif