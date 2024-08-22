// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSHORTCUTACTION_H
#define HMSHORTCUTACTION_H

@class WFHomeWorkflow, NSData;


#import "HMAction.h"

@interface HMShortcutAction : HMAction {
    os_unfair_lock_s _lock;
    WFHomeWorkflow *_shortcut;
    NSData *_shortcutData;
}


@property (readonly) WFHomeWorkflow *shortcut;


+(BOOL)isSupportedForHome:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(BOOL)requiresDeviceUnlock;
-(NSUInteger)type;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 home:(id)arg1 ;
-(id)initWithShortcut:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;


@end


#endif