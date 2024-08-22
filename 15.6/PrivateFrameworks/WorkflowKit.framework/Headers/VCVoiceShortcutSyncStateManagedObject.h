// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVOICESHORTCUTSYNCSTATEMANAGEDOBJECT_H
#define VCVOICESHORTCUTSYNCSTATEMANAGEDOBJECT_H

@class NSManagedObject, NSData, NSString;


#import "VCVoiceShortcutManagedObject.h"

@interface VCVoiceShortcutSyncStateManagedObject : NSManagedObject

@property (nonatomic) BOOL hasSynced;
@property (retain, nonatomic) NSData *metadata;
@property (copy, nonatomic) NSString *syncServiceIdentifier;
@property (retain, nonatomic) VCVoiceShortcutManagedObject *voiceShortcut;


+(id)fetchRequest;


@end


#endif