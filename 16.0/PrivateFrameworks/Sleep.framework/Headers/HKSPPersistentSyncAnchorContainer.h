// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPPERSISTENTSYNCANCHORCONTAINER_H
#define HKSPPERSISTENTSYNCANCHORCONTAINER_H

@protocol HKSPUserDefaults;


#import "HKSPSyncAnchorContainer.h"

@interface HKSPPersistentSyncAnchorContainer : HKSPSyncAnchorContainer {
    id<HKSPUserDefaults> *_defaults;
}




+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)inMemoryCopy;
-(id)initWithIdentifier:(id)arg0 defaults:(id)arg1 ;
-(id)lock_getSyncAnchorForKey:(id)arg0 ;
-(void)lock_removeSyncAnchorForKey:(id)arg0 ;
-(void)lock_setSyncAnchor:(id)arg0 forKey:(id)arg1 ;


@end


#endif