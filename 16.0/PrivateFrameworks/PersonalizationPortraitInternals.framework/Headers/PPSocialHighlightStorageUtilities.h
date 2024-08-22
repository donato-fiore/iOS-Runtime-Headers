// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSOCIALHIGHLIGHTSTORAGEUTILITIES_H
#define PPSOCIALHIGHLIGHTSTORAGEUTILITIES_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightStorageUtilities : NSObject {
    _PASLock *_lock;
}




-(id)init;
-(id)resolveBundleIdToApplicationIdentifierIfInstalled:(id)arg0 ;
-(void)clearCache;


@end


#endif