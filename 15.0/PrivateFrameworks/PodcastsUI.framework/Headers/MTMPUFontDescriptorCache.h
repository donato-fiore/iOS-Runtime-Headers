// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTMPUFONTDESCRIPTORCACHE_H
#define MTMPUFONTDESCRIPTORCACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MTMPUMutableFontDescriptor.h"

@interface MTMPUFontDescriptorCache : NSObject {
    MTMPUMutableFontDescriptor *_reusableMutableFontDescriptor;
    NSUInteger _maximumCapacity;
    NSMutableArray *_orderedCachedFontDescriptors;
}




+(id)sharedFontDescriptorCache;
-(id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg0 ;
-(id)cachedImmutableFontDescriptorForConfigurationBlock:(id)arg0 ;
-(id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg0 ;
-(id)init;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif