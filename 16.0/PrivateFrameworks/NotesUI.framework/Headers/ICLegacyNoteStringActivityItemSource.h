// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLEGACYNOTESTRINGACTIVITYITEMSOURCE_H
#define ICLEGACYNOTESTRINGACTIVITYITEMSOURCE_H

@class NSString;
@protocol UIActivityItemSource;


#import "ICNoteBaseActivityItemSource.h"

@interface ICLegacyNoteStringActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource>



@property (copy, nonatomic) NSString *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *plainText; // ivar: _plainText
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithTitle:(id)arg0 content:(id)arg1 plainText:(id)arg2 ;


@end


#endif