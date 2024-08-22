// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTPHOTOPREVIEWITEM_H
#define CNCONTACTPHOTOPREVIEWITEM_H

@class NSString, NSURL;
@protocol QLPreviewItem;

#import <Foundation/Foundation.h>


@interface CNContactPhotoPreviewItem : NSObject <QLPreviewItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *previewItemTitle; // ivar: _previewItemTitle
@property (retain, nonatomic) NSURL *previewItemURL; // ivar: _previewItemURL
@property (readonly) Class superclass;




@end


#endif