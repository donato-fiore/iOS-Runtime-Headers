// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FONTASSETDOWNLOADMANAGER_H
#define FONTASSETDOWNLOADMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FontAssetDownloadManager : NSObject {
    TCFRef<const __CFArray *> fDescriptors;
    TCFRef<const __CFSet *> fMandatoryAttributes;
    id *fProgressCallbackBlock;
    NSMutableDictionary *fProgressParams;
    NSMutableDictionary *fDownloadOptions;
    NSMutableDictionary *fAssetToDescriptors;
}




-(void)dealloc;


@end


#endif