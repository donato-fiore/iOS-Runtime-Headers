// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTESTRINGACTIVITYITEMSOURCE_H
#define ICNOTESTRINGACTIVITYITEMSOURCE_H

@class NSAttributedString, NSString;
@protocol UIActivityItemSource;


#import "ICNoteBaseActivityItemSource.h"

@interface ICNoteStringActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource>



@property (copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (copy, nonatomic) id *attributedStringCreator; // ivar: _attributedStringCreator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)allowsAttributedStringForActivityType:(id)arg0 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 attributedStringCreator:(id)arg1 ;


@end


#endif