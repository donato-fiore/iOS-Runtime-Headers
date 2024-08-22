// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARRECORDDATASOURCE_H
#define AVTAVATARRECORDDATASOURCE_H

@class NSString, AVTPAvatarRecordDataSource;
@protocol AVTAvatarRecordDataSource;

#import <Foundation/Foundation.h>

#import "AVTAvatarStore.h"

@interface AVTAvatarRecordDataSource : NSObject <AVTAvatarRecordDataSource>



@property (retain, nonatomic) AVTAvatarStore *avatarStore; // ivar: _avatarStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVTAvatarStore *observableWrappedAvatarStore; // ivar: _observableWrappedAvatarStore
@property (retain, nonatomic) AVTPAvatarRecordDataSource *persistenceAvatarRecordDataSource; // ivar: _persistenceAvatarRecordDataSource
@property (readonly) Class superclass;


+(id)defaultUIDataSourceWithDomainIdentifier:(id)arg0 ;
-(NSUInteger)indexOfRecordPassingTest:(id)arg0 ;
-(NSUInteger)numberOfRecords;
-(id)indexSetForEditableRecords;
-(id)indexesOfRecordsPassingTest:(id)arg0 ;
-(id)initWithRecordStore:(id)arg0 fetchRequest:(id)arg1 ;
-(id)initWithRecordStore:(id)arg0 fetchRequest:(id)arg1 environment:(id)arg2 ;
-(id)internalRecordStore;
-(id)recordAtIndex:(NSUInteger)arg0 ;
-(id)recordStore;
-(void)addObserver:(id)arg0 ;
-(void)addPriorityObserver:(id)arg0 ;
-(void)flushRecordsForEnteringBackground;
-(void)removeObserver:(id)arg0 ;


@end


#endif