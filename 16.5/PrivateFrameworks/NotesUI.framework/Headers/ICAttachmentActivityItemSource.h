// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTACTIVITYITEMSOURCE_H
#define ICATTACHMENTACTIVITYITEMSOURCE_H

@class ICAttachment, NSString;
@protocol UIActivityItemSourceAttachment, UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface ICAttachmentActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource>



@property (weak, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (readonly, copy, nonatomic) NSString *attachmentTypeUTI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 attachmentNameForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithAttachment:(id)arg0 ;


@end


#endif