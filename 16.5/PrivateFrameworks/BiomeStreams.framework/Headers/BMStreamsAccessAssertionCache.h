// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTREAMSACCESSASSERTIONCACHE_H
#define BMSTREAMSACCESSASSERTIONCACHE_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface BMStreamsAccessAssertionCache : NSObject {
    _PASLock *_lock;
}




+(id)sharedCache;
-(id)_makeAssertionWithDescriptor:(id)arg0 extensionToken:(id)arg1 ;
-(id)assertionForAccessDescriptor:(id)arg0 ;
-(id)createAssertionForAccessDescriptor:(id)arg0 extensionToken:(id)arg1 ;
-(id)init;


@end


#endif