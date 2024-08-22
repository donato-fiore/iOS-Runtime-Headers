// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALALLFILTERINGMIGRATIONACCOUNTSTOREDELEGATE_H
#define CALALLFILTERINGMIGRATIONACCOUNTSTOREDELEGATE_H

@protocol CalChangeFilteringMigrationAccountStoreDelegate;

#import <Foundation/Foundation.h>


@interface CalAllFilteringMigrationAccountStoreDelegate : NSObject <CalChangeFilteringMigrationAccountStoreDelegate>





-(BOOL)allowChangesToExistingTopLevelAccount:(id)arg0 ;
-(BOOL)allowCreationOfTopLevelAccountWithTypeIdentifier:(id)arg0 ;


@end


#endif