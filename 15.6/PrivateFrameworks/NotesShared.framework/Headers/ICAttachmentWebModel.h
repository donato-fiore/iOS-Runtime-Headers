// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTWEBMODEL_H
#define ICATTACHMENTWEBMODEL_H



#import "ICAttachmentModel.h"

@interface ICAttachmentWebModel : ICAttachmentModel

@property (copy) id *pendingFetchCompletionHandler; // ivar: _pendingFetchCompletionHandler


+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
-(BOOL)canConvertToHTMLForSharing;
-(BOOL)hasPreviews;
-(BOOL)showThumbnailInNoteList;
-(id)attributesForSharingHTMLWithTagName:(*id)arg0 textContent:(*id)arg1 ;
-(id)searchableTextContent;


@end


#endif