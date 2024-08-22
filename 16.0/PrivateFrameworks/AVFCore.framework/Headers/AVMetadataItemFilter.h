// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMETADATAITEMFILTER_H
#define AVMETADATAITEMFILTER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "AVMetadataItemFilterInternal.h"

@interface AVMetadataItemFilter : NSObject {
    AVMetadataItemFilterInternal *_itemFilterInternal;
}


@property (readonly) NSDictionary *whitelist;


+(id)metadataItemFilterForSharing;


@end


#endif