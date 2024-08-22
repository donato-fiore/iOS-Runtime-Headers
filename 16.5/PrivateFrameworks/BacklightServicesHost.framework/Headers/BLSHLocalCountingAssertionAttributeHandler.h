// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHLOCALCOUNTINGASSERTIONATTRIBUTEHANDLER_H
#define BLSHLOCALCOUNTINGASSERTIONATTRIBUTEHANDLER_H

@class NSMutableDictionary;


#import "BLSHLocalAssertionAttributeHandler.h"

@interface BLSHLocalCountingAssertionAttributeHandler : BLSHLocalAssertionAttributeHandler {
    NSMutableDictionary *_lock_entryDictionary;
    os_unfair_lock_s _countingDictionaryLock;
}




+(Class)attributeBaseClass;
+(Class)entryClass;
+(id)attributeClasses;
-(id)countingTargetForEntry:(id)arg0 ;
-(id)entriesForCountingTarget:(id)arg0 ;
-(id)initForService:(id)arg0 ;
-(void)activateWithFirstEntry:(id)arg0 ;
-(void)deactivateWithFinalEntry:(id)arg0 ;


@end


#endif