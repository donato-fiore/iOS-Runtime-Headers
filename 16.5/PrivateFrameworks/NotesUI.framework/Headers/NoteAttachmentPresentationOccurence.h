// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOTEATTACHMENTPRESENTATIONOCCURENCE_H
#define NOTEATTACHMENTPRESENTATIONOCCURENCE_H

@class DOMHTMLElement;

#import <Foundation/Foundation.h>

#import "NoteAttachmentPresentation.h"

@interface NoteAttachmentPresentationOccurence : NSObject

@property (readonly, nonatomic) DOMHTMLElement *element; // ivar: _element
@property (readonly, nonatomic) NoteAttachmentPresentation *presentation; // ivar: _presentation


-(id)init;
-(id)initWithPresentation:(id)arg0 element:(id)arg1 ;
-(id)previewItemTitle;
-(id)previewItemURL;


@end


#endif