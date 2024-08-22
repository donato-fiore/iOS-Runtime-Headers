// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTPDFMODEL_H
#define ICATTACHMENTPDFMODEL_H



#import "ICAttachmentModel.h"

@interface ICAttachmentPDFModel : ICAttachmentModel



+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
+(id)contentTextFromPDFAtURL:(id)arg0 ;
-(BOOL)canMarkup;
-(BOOL)hasPreviews;
-(id)searchableTextContent;


@end


#endif