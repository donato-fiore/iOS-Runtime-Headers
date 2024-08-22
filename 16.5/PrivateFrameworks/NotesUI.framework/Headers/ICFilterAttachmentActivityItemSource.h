// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICFILTERATTACHMENTACTIVITYITEMSOURCE_H
#define ICFILTERATTACHMENTACTIVITYITEMSOURCE_H

@class NSString;
@protocol UIActivityItemSourceAttachment, UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface ICFilterAttachmentActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource>



@property (retain, nonatomic) id *attachmentItem; // ivar: _attachmentItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityItemSourceForSelector:(SEL)arg0 ;
-(id)activityViewController:(id)arg0 attachmentNameForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initAttachmentItem:(id)arg0 ;


@end


#endif