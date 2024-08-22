// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUIP33_1C25C4B203EEAC6A19839AC5BDB6A34530UILARGECONTENTVIEWERITEMBRIDGE_H
#define _TTC7SWIFTUIP33_1C25C4B203EEAC6A19839AC5BDB6A34530UILARGECONTENTVIEWERITEMBRIDGE_H

@class UIImage, NSString;
@protocol UILargeContentViewerItem;

#import <Foundation/Foundation.h>


@interface _TtC7SwiftUIP33_1C25C4B203EEAC6A19839AC5BDB6A34530UILargeContentViewerItemBridge : NSObject <UILargeContentViewerItem>

 {
    ? largeContentTitle;
}


@property (nonatomic, readonly) UIImage *largeContentImage; // ivar: largeContentImage
@property (nonatomic, readonly) UIEdgeInsets largeContentImageInsets;
@property (nonatomic, readonly) NSString *largeContentTitle;
@property (nonatomic, readonly) BOOL scalesLargeContentImage;
@property (nonatomic, readonly) BOOL showsLargeContentViewer;


-(id)init;


@end


#endif