// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDBREACHSTORE_H
#define WBSPASSWORDBREACHSTORE_H

@class NSDate, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "WBSPersistentPropertyListStore.h"

@interface WBSPasswordBreachStore : NSObject {
    WBSPersistentPropertyListStore *_store;
}


@property (retain, nonatomic) NSDate *lastSessionCompletionDate;
@property (retain, nonatomic) NSDictionary *queuedPasswordBagManagerState;
@property (nonatomic) NSUInteger rampIdentifier;
@property (retain, nonatomic) NSArray *recentlyBreachedPersistentIdentifiers;
@property (retain, nonatomic) NSArray *resultRecords;


+(BOOL)_readAndValidatePersistentIdentifierCanaryWithPersistentIdentifier:(id)arg0 expectedValue:(id)arg1 ;
+(id)_createPersistentIdentifierCanary;
-(id)initWithBackingStoreURL:(id)arg0 ;
-(void)saveAndCloseStoreSynchronously;
-(void)saveStoreSynchronously;


@end


#endif