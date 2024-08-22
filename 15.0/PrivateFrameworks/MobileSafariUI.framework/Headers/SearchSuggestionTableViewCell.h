// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHSUGGESTIONTABLEVIEWCELL_H
#define SEARCHSUGGESTIONTABLEVIEWCELL_H

@class UITableViewCell;


#import "CompletionArrowView.h"

@interface SearchSuggestionTableViewCell : UITableViewCell {
    CompletionArrowView *_accessoryView;
}


@property (nonatomic) BOOL hidesAccessoryView; // ivar: _hidesAccessoryView
@property (nonatomic) BOOL hidesImage;


+(void)cachedImageForDefaultSearchProvider:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif