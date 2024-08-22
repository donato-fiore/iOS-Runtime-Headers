// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDELAYEDFILEDSYSTEMDELETIONS_H
#define PLDELAYEDFILEDSYSTEMDELETIONS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLDelayedFiledSystemDeletions : NSObject {
    NSMutableArray *_deletionInfos;
}




+(id)deletionsFromChangeHubEvent:(id)arg0 ;
+(id)filesystemDeletionQueue;
+(void)appendDescriptionForEvent:(id)arg0 toComponents:(id)arg1 ;
+(void)waitForAllDelayedDeletionsToFinish;
-(id)debugDescription;
-(id)initWithFilesystemDeletionInfos:(id)arg0 ;
-(void)addFilesystemDeletionInfo:(id)arg0 ;
-(void)appendToXPCMessage:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)dealloc;
-(void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif