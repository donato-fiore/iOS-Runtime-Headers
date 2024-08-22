// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHEARNEDINSTANCEENTITYWRAPPER_H
#define ACHEARNEDINSTANCEENTITYWRAPPER_H

@class NSString, HDProfile;
@protocol ACHEarnedInstanceEntitySyncedEarnedInstancesObserver;

#import <Foundation/Foundation.h>


@interface ACHEarnedInstanceEntityWrapper : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> *syncedEarnedInstancesObserver; // ivar: _syncedEarnedInstancesObserver


-(BOOL)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg0 provenance:(NSInteger)arg1 ;
-(BOOL)removeAllEarnedInstancesWithError:(*id)arg0 ;
-(BOOL)removeEarnedInstances:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeEarnedInstancesForTemplateUniqueName:(id)arg0 error:(*id)arg1 ;
-(id)allEarnedInstancesWithError:(*id)arg0 ;
-(id)earnedInstancesForDateComponents:(id)arg0 error:(*id)arg1 ;
-(id)earnedInstancesForTemplateUniqueName:(id)arg0 error:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(id)insertEarnedInstances:(id)arg0 provenance:(NSInteger)arg1 databaseContext:(id)arg2 error:(*id)arg3 ;


@end


#endif