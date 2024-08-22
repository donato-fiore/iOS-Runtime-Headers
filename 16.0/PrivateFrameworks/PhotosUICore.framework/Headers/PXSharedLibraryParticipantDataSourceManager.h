// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYPARTICIPANTDATASOURCEMANAGER_H
#define PXSHAREDLIBRARYPARTICIPANTDATASOURCEMANAGER_H

@protocol PXSharedLibraryMutableParticipantDataSourceManager;


#import "PXSectionedDataSourceManager.h"
#import "PXSharedLibraryParticipantDataSource.h"

@interface PXSharedLibraryParticipantDataSourceManager : PXSectionedDataSourceManager <PXSharedLibraryMutableParticipantDataSourceManager>



@property (readonly, nonatomic) PXSharedLibraryParticipantDataSource *dataSource;


+(id)aggregatedDataSource;
+(id)aggregatedDataSourceWithParticipants:(id)arg0 ;
-(id)createInitialDataSource;
-(id)pauseChangeDeliveryWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(void)addParticipants:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)removeParticipantAtIndex:(NSUInteger)arg0 ;
-(void)replaceDataSourceWithDataSource:(id)arg0 ;
-(void)resumeChangeDelivery:(id)arg0 ;


@end


#endif