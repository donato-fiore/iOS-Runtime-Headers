// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18_QUICKLOOK_SWIFTUI22QLPREVIEWITEMCONTAINER_H
#define _TTC18_QUICKLOOK_SWIFTUI22QLPREVIEWITEMCONTAINER_H

@class NSURL;
@protocol QLPreviewItem;

#import <Foundation/Foundation.h>


@interface _TtC18_QuickLook_SwiftUI22QLPreviewItemContainer : NSObject <QLPreviewItem>

 {
    ? previewItemURL;
}


@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, copy) NSURL *previewItemURL;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;


@end


#endif