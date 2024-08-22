// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIWATCHLISTCARDROWMODEL_H
#define SEARCHUIWATCHLISTCARDROWMODEL_H

@class SFWatchListCardSection, SFImage, SFPunchout, NSString;
@protocol SearchUIWatchListCardRowModelDelegate;


#import "SearchUICardSectionRowModel.h"
#import "SearchUIWatchListCardsManager.h"

@interface SearchUIWatchListCardRowModel : SearchUICardSectionRowModel

@property (nonatomic) NSInteger buttonState; // ivar: _buttonState
@property (retain, nonatomic) SFWatchListCardSection *cardSection;
@property (weak) NSObject<SearchUIWatchListCardRowModelDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hasError; // ivar: _hasError
@property (nonatomic) BOOL hasLoaded; // ivar: _hasLoaded
@property (retain, nonatomic) SFImage *image; // ivar: _image
@property (retain, nonatomic) SearchUIWatchListCardsManager *manager; // ivar: _manager
@property (retain, nonatomic) SFPunchout *punchout; // ivar: _punchout
@property (retain, nonatomic) NSString *text; // ivar: _text


-(BOOL)isDraggable;
-(BOOL)isTappable;
-(id)initWithResult:(id)arg0 cardSection:(id)arg1 asyncRowManager:(id)arg2 queryId:(NSUInteger)arg3 ;
-(int)separatorStyle;
-(void)toggleAddToUpNext;
-(void)updateWithText:(id)arg0 buttonState:(NSInteger)arg1 ;
-(void)updateWithText:(id)arg0 buttonState:(NSInteger)arg1 image:(id)arg2 punchout:(id)arg3 ;


@end


#endif