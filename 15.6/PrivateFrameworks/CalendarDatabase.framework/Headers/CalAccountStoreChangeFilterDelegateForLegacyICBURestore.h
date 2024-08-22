// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALACCOUNTSTORECHANGEFILTERDELEGATEFORLEGACYICBURESTORE_H
#define CALACCOUNTSTORECHANGEFILTERDELEGATEFORLEGACYICBURESTORE_H

@protocol CalChangeFilteringMigrationAccountStoreDelegate;

#import <Foundation/Foundation.h>


@interface CalAccountStoreChangeFilterDelegateForLegacyICBURestore : NSObject <CalChangeFilteringMigrationAccountStoreDelegate>





-(BOOL)allowChangesToExistingTopLevelAccount:(id)arg0 ;
-(BOOL)allowCreationOfTopLevelAccountWithTypeIdentifier:(id)arg0 ;


@end


#endif