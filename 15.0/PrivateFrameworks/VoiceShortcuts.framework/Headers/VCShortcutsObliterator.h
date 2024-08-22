// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSHORTCUTSOBLITERATOR_H
#define VCSHORTCUTSOBLITERATOR_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "WFTriggerRegistrar.h"

@interface VCShortcutsObliterator : NSObject

@property (readonly, nonatomic) NSSet *syncDataHandlers; // ivar: _syncDataHandlers
@property (readonly, nonatomic) WFTriggerRegistrar *triggerRegistrar; // ivar: _triggerRegistrar


-(BOOL)deleteAppGroupWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteDataVaultWithError:(*id)arg0 ;
-(BOOL)deleteKeychainItemsWithError:(*id)arg0 ;
-(BOOL)terminateProcessWithIdentifier:(id)arg0 assertion:(*id)arg1 error:(*id)arg2 ;
-(id)initWithTriggerRegistrar:(id)arg0 syncDataHandlers:(id)arg1 ;
-(void)obliterate:(*id)arg0 ;
-(void)resetWatchSync;


@end


#endif