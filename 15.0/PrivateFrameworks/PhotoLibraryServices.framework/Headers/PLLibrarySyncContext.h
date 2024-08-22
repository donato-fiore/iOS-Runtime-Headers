// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLLIBRARYSYNCCONTEXT_H
#define PLLIBRARYSYNCCONTEXT_H

@class NSMutableDictionary, NSString, NSArray;
@protocol PLSyncContext;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"
#import "PLCloudRecordOrganizer.h"

@interface PLLibrarySyncContext : NSObject <PLSyncContext>

 {
    NSMutableDictionary *_assetAdjustmentStatesByCloudIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *personUUIDsToDedupe; // ivar: _personUUIDsToDedupe
@property (readonly) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) PLCloudRecordOrganizer *recordOrganizer; // ivar: _recordOrganizer
@property (readonly, nonatomic) BOOL serverSupportsGraphHome;
@property (readonly, nonatomic) BOOL serverSupportsVision;
@property (readonly) Class superclass;


-(BOOL)personUUIDIsDeleted:(id)arg0 ;
-(id)assetAdjustmentStateForCloudIdentifier:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)makeFace;
-(id)personForUUID:(id)arg0 ;
-(void)deleteFaces:(id)arg0 ;
-(void)setAssetAdjustmentState:(id)arg0 forCloudIdentifer:(id)arg1 ;


@end


#endif