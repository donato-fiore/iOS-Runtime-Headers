// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARQUICKLOOKPREVIEWITEMTEMP_H
#define ARQUICKLOOKPREVIEWITEMTEMP_H

@class ARQuickLookPreviewItem, NSURL, NSString;
@protocol QLPreviewItem;



@interface ARQuickLookPreviewItemTemp : ARQuickLookPreviewItem <QLPreviewItem>

 {
    NSURL *_myPreviewURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly) Class superclass;


-(id)initWithFileAtURL:(id)arg0 ;


@end


#endif