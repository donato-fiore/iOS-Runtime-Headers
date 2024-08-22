// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HVCONTENTADMISSIONGUARDEDDATA_H
#define HVCONTENTADMISSIONGUARDEDDATA_H

@class NSSet, NSHashTable, _PASAsset2;

#import <Foundation/Foundation.h>


@interface HVContentAdmissionGuardedData : NSObject {
    NSSet *_learnFromThisAppBundleIdentifierDenylist;
    NSSet *_configurableBundleIdentifierDenyList;
    NSHashTable *_observers;
    _PASAsset2 *_configurableBundleIdentifierDenyListAsset;
    BOOL _suggestionsShouldShowPastEvents;
}






@end


#endif