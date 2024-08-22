// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKFILEUPLOADITEM_H
#define _WKFILEUPLOADITEM_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface _WKFileUploadItem : NSObject {
    RetainPtr<NSURL> _fileURL;
}


@property (readonly, nonatomic) RetainPtr<UIImage> displayImage;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic, getter=isVideo) BOOL video;


-(id)initWithFileURL:(id)arg0 ;


@end


#endif