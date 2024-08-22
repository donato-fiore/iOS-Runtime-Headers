// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXRESOURCELOADER_H
#define AXRESOURCELOADER_H


#import <Foundation/Foundation.h>


@interface AXResourceLoader : NSObject



+(id)loadImageWithIdentifier:(id)arg0 orPath:(id)arg1 principalClass:(*Class)arg2 error:(*id)arg3 ;
+(id)loadResource:(NSUInteger)arg0 principalClass:(*Class)arg1 error:(*id)arg2 ;
+(void)_path:(*id)arg0 bundleID:(*id)arg1 forRescource:(NSUInteger)arg2 ;


@end


#endif