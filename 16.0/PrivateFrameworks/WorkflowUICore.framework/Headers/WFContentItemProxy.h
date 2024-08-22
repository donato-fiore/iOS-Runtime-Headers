// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTENTITEMPROXY_H
#define WFCONTENTITEMPROXY_H

@class NSString, WFFileRepresentation, WFContentItem, NSURL;
@protocol QLPreviewItem;

#import <Foundation/Foundation.h>


@interface WFContentItemProxy : NSObject <QLPreviewItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFFileRepresentation *file; // ivar: _file
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) WFContentItem *item; // ivar: _item
@property (weak, nonatomic) WFContentItem *originalItem; // ivar: _originalItem
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (copy, nonatomic) id *refreshBlock; // ivar: _refreshBlock
@property (readonly) Class superclass;


+(id)previewRetrievalQueue;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif