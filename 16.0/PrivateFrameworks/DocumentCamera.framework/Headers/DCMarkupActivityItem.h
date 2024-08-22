// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCMARKUPACTIVITYITEM_H
#define DCMARKUPACTIVITYITEM_H


#import <Foundation/Foundation.h>

#import "ICDocCamDocumentInfo.h"
#import "ICDocCamImageCache.h"

@interface DCMarkupActivityItem : NSObject

@property (retain, nonatomic) ICDocCamDocumentInfo *documentInfo; // ivar: _documentInfo
@property (retain, nonatomic) ICDocCamImageCache *imageCache; // ivar: _imageCache


-(id)initWithDocumentInfo:(id)arg0 imageCache:(id)arg1 ;


@end


#endif