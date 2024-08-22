// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSAVEDPASSWORDSTORE_H
#define WBSSAVEDPASSWORDSTORE_H

@class NSSet;


#import "WBSSavedAccountStore.h"

@interface WBSSavedPasswordStore : WBSSavedAccountStore

@property (readonly, nonatomic) NSSet *highLevelDomainsOfAllSavedPasswordsExcludingNeverSaveMarkerPasswords;




@end


#endif