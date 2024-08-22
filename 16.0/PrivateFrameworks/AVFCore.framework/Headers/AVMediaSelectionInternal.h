// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMEDIASELECTIONINTERNAL_H
#define AVMEDIASELECTIONINTERNAL_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVMediaSelectionInternal : NSObject {
    AVWeakReference *assetWeakReference;
    NSArray *groupDictionaries;
    NSMutableArray *selectedMediaArray;
}






@end


#endif