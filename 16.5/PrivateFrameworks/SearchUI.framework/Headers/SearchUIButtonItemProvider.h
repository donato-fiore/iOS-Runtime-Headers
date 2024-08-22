// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIBUTTONITEMPROVIDER_H
#define SEARCHUIBUTTONITEMPROVIDER_H

@class NSArray, NSString, UIView, NSMutableDictionary, NSMutableArray;
@protocol NUIContainerViewDelegate, SearchUIFeedbackDelegate;

#import <Foundation/Foundation.h>


@interface SearchUIButtonItemProvider : NSObject <NUIContainerViewDelegate>



@property (readonly) NSArray *buttonItemViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (retain, nonatomic) UIView *fillerView; // ivar: _fillerView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *viewTypeToButtonList; // ivar: _viewTypeToButtonList
@property (retain, nonatomic) NSMutableArray *visibleButtonItems; // ivar: _visibleButtonItems


+(void)commandButtons:(id)arg0 iterator:(id)arg1 ;
-(BOOL)containerView:(id)arg0 shouldRestartMeasurementDueToCompressionInAxis:(NSInteger)arg1 forReason:(NSInteger)arg2 ;
-(id)initWithRowModel:(id)arg0 itemProvider:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)makeButtonsCompact;


@end


#endif