// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTURLANDNOTESINLINEEDITITEM_H
#define EKEVENTURLANDNOTESINLINEEDITITEM_H

@class NSString;
@protocol EKCalendarItemInlineEditItem;


#import "EKEventEditItem.h"
#import "EKEventURLInlineEditItem.h"
#import "EKEventNotesInlineEditItem.h"

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem>

 {
    EKEventURLInlineEditItem *_urlEditItem;
    EKEventNotesInlineEditItem *_notesEditItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isInline;
-(BOOL)isSaveable;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)searchStringForEventAutocomplete;
-(void)_contentSizeCategoryChanged;
-(void)dealloc;
-(void)refreshFromCalendarItemAndStore;
-(void)reset;
-(void)setCalendarItem:(id)arg0 store:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)setSelectedResponder:(id)arg0 ;
-(void)tableViewDidScroll;


@end


#endif