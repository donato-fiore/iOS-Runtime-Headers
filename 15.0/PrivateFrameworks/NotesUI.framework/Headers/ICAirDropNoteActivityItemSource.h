// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICAIRDROPNOTEACTIVITYITEMSOURCE_H
#define ICAIRDROPNOTEACTIVITYITEMSOURCE_H

@class NSString;
@protocol UIActivityItemSource;


#import "ICNoteBaseActivityItemSource.h"

@interface ICAirDropNoteActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource>



@property (retain, nonatomic) id *airDropActivityItem; // ivar: _airDropActivityItem
@property (copy, nonatomic) id *airDropDocumentCreator; // ivar: _airDropDocumentCreator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithTitle:(id)arg0 airDropDocumentCreator:(id)arg1 ;


@end


#endif