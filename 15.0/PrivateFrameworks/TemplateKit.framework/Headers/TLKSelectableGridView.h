// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKSELECTABLEGRIDVIEW_H
#define TLKSELECTABLEGRIDVIEW_H

@class NSMutableArray, NUIContainerGridView, NSString, NSArray;
@protocol NUIContainerViewDelegate, TLKSelectableGridViewDelegate;


#import "TLKView.h"

@interface TLKSelectableGridView : TLKView <NUIContainerViewDelegate>



@property (retain, nonatomic) NSMutableArray *buttons; // ivar: _buttons
@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TLKSelectableGridViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tuples; // ivar: _tuples


+(NSUInteger)idealNumberOfColumnsForTitles:(id)arg0 fittingSize:(struct CGSize )arg1 containerView:(id)arg2 ;
+(NSUInteger)maxColumns;
-(id)_createButton;
-(id)arrangedEntrySubviews;
-(id)setupContentView;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)observedPropertiesChanged;
-(void)selectableGridButtonPressed:(id)arg0 ;


@end


#endif