// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSPLISTHINT_H
#define _LSPLISTHINT_H

@class NSSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface _LSPlistHint : NSObject {
    NSSet *_keys;
    NSDictionary *_cachedValues;
    os_unfair_lock_s _valueLock;
    BOOL _cachedValuesAreComplete;
    BOOL _keysAreCompacted;
}




-(id)debugDescription;


@end


#endif