// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTADDFAVORITEACTION_H
#define CNCONTACTADDFAVORITEACTION_H

@class NSString, CNFavorites;
@protocol CNUIFavoritesEntryPickerDelegate, CNPropertyContextMenuAction;


#import "CNPropertyAction.h"
#import "CNUIFavoritesEntryPicker.h"

@interface CNContactAddFavoriteAction : CNPropertyAction <CNUIFavoritesEntryPickerDelegate, CNPropertyContextMenuAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNFavorites *favorites; // ivar: _favorites
@property (retain, nonatomic) CNUIFavoritesEntryPicker *favoritesEntryPicker; // ivar: _favoritesEntryPicker
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPerformAction;
-(id)initWithContact:(id)arg0 propertyItems:(id)arg1 favorites:(id)arg2 ;
-(id)menuProviderForContextMenuInteraction:(SEL)arg0 ;
-(void)_saveFavorite:(id)arg0 ;
-(void)favoritesEntryPicker:(id)arg0 didPickEntry:(id)arg1 ;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif