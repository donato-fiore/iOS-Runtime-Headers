// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKATTACHMENTQLITEM_H
#define EKATTACHMENTQLITEM_H

@class NSURL, NSString;
@protocol QLPreviewItem;

#import <Foundation/Foundation.h>


@interface EKAttachmentQLItem : NSObject <QLPreviewItem>

 {
    NSURL *_url;
    NSString *_filename;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly) Class superclass;


-(id)initWithURL:(id)arg0 filename:(id)arg1 ;


@end


#endif