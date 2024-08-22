// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUNIQUE_H
#define STUNIQUE_H

@class NSPersistentHistoryToken;
@protocol STPersistenceControllerProtocol;

#import <Foundation/Foundation.h>


@interface STUnique : NSObject {
    NSPersistentHistoryToken *_migratedToken;
}


@property (retain, nonatomic) NSObject<STPersistenceControllerProtocol> *persistenceController; // ivar: _persistenceController


+(Class)_internalClassForSerializableClassName:(id)arg0 ;
+(id)cloudToLocalMapping;
+(id)localToCloudMapping;
+(id)mirroredEntityNames;
-(BOOL)addHistoryToken:(id)arg0 forAuthor:(id)arg1 toMetadataForStore:(id)arg2 error:(*id)arg3 ;
-(BOOL)areLocalChangesInterestingWithError:(*id)arg0 ;
-(BOOL)migrateWithError:(*id)arg0 ;
-(BOOL)migrateWithExportNeeded:(*BOOL)arg0 error:(*id)arg1 ;
-(id)historyTokenForAuthor:(id)arg0 fromStore:(id)arg1 ;
-(id)initWithPersistenceController:(id)arg0 ;
-(void)newResolveConflictsBetweenLocalDeltas:(id)arg0 cloudDeltas:(id)arg1 ;
-(void)resolveConflictsBetweenLocalDeltas:(id)arg0 cloudDeltas:(id)arg1 ;


@end


#endif