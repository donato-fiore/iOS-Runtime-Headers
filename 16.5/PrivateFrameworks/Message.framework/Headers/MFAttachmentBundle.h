// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFATTACHMENTBUNDLE_H
#define MFATTACHMENTBUNDLE_H


#import <Foundation/Foundation.h>


@interface MFAttachmentBundle : NSObject



+(BOOL)isFileBundleURL:(id)arg0 ;
+(id)_stripBundlePath:(id)arg0 entryPath:(id)arg1 ;
+(id)dataForFileBundleURL:(id)arg0 ;


@end


#endif