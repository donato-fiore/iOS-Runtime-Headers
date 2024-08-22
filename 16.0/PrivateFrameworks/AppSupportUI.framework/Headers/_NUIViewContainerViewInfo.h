// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUIVIEWCONTAINERVIEWINFO_H
#define _NUIVIEWCONTAINERVIEWINFO_H


#import <Foundation/Foundation.h>


@interface _NUIViewContainerViewInfo : NSObject {
    nui_size_cache _sizeCache;
    CGSize _minSize;
    CGSize _maxSize;
    UIEdgeInsets _alignmentInsets;
    UIEdgeInsets _cachedAlignmentInsets;
    ? _baselines;
    ? _flags;
}




-(id)init;


@end


#endif