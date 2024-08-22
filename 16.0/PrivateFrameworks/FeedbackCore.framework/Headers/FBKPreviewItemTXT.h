// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKPREVIEWITEMTXT_H
#define FBKPREVIEWITEMTXT_H

@class NSURL, NSString;
@protocol QLPreviewItem;



@interface FBKPreviewItemTXT : NSURL <QLPreviewItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly) Class superclass;


-(id)previewItemContentType;


@end


#endif