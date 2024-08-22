// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHSUGGESTIONTABLEVIEWCELL_H
#define SEARCHSUGGESTIONTABLEVIEWCELL_H



#import "CompletionListTableViewCell.h"
#import "CompletionArrowView.h"

@interface SearchSuggestionTableViewCell : CompletionListTableViewCell {
    CompletionArrowView *_accessoryView;
}


@property (copy, nonatomic) id *accessoryActionHandler; // ivar: _accessoryActionHandler
@property (nonatomic) BOOL hidesAccessoryView; // ivar: _hidesAccessoryView
@property (nonatomic) BOOL hidesImage;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_accessoryButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif