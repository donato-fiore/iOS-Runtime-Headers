// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLIBRARYSCOPECHANGETRACKER_H
#define PLLIBRARYSCOPECHANGETRACKER_H

@class NSPersistentHistoryToken, NSManagedObjectContext, NSDictionary;
@protocol PLLibraryScopeChangeTrackerDelegate;

#import <Foundation/Foundation.h>


@interface PLLibraryScopeChangeTracker : NSObject {
    NSPersistentHistoryToken *_lastKnownToken;
    NSManagedObjectContext *_context;
    NSDictionary *_entityNameToAllowedPropertyDescriptionMap;
}


@property (weak, nonatomic) NSObject<PLLibraryScopeChangeTrackerDelegate> *delegate; // ivar: _delegate
@property (readonly) BOOL hasChangeTrackerToken;


+(id)archivedDataWithToken:(id)arg0 ;
+(id)unarchiveTokentWithData:(id)arg0 ;
-(BOOL)start;
-(id)_allowedPropertyDescriptionsForEntityName:(id)arg0 ;
-(id)_transactionIteratorSinceToken:(id)arg0 ;
-(id)currentToken;
-(id)fetchObjectsNeedingEvaluation;
-(id)fetchResultsSincePersistentHistoryToken:(id)arg0 ;
-(id)initWithManagedObjectContext:(id)arg0 ;
-(id)lastKnownTokenFromDisk;
-(void)clearToken;
-(void)saveLastKnownChangeTrackerTokenToDisk;
-(void)stop;
-(void)updateLastKnownTokenToResult:(id)arg0 ;


@end


#endif