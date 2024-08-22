// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFFAIRPLAYVALIDATIONMANAGER_H
#define PFFAIRPLAYVALIDATIONMANAGER_H

@protocol PFFairPlayValidationManaging;

#import <Foundation/Foundation.h>


@interface PFFairPlayValidationManager : NSObject <PFFairPlayValidationManaging>

 {
    ? keyLoader;
    ? episodeFetcher;
    ? episodeRemovalManager;
    ? internalQueue;
    ? $__lazy_storage_$_logPrefix;
}




-(id)init;
-(id)initWithEpisodeRemovalManager:(id)arg0 ;
-(void)validateDownloadedEpisodesWithCompletion:(id)arg0 ;


@end


#endif