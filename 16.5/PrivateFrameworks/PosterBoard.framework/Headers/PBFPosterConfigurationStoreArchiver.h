// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERCONFIGURATIONSTOREARCHIVER_H
#define PBFPOSTERCONFIGURATIONSTOREARCHIVER_H


#import <Foundation/Foundation.h>


@interface PBFPosterConfigurationStoreArchiver : NSObject



+(NSInteger)minSupportedArchiveVersion;
// +(id)_unarchiveWithHandler:(id)arg0 manifest:(unk)arg1 error:(*id)arg2  ;
+(id)archiveConfigurationStoreWithCoordinator:(id)arg0 error:(*id)arg1 ;
+(id)unarchiveConfigurationStoreArchiveAtURL:(id)arg0 manifest:(*id)arg1 error:(*id)arg2 ;
+(id)unarchiveConfigurationStoreArchiveData:(id)arg0 manifest:(*id)arg1 error:(*id)arg2 ;


@end


#endif