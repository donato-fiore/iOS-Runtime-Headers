// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPHOTOANALYSISFILECACHE_H
#define NTKPHOTOANALYSISFILECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NTKTaskScheduler.h"

@interface NTKPhotoAnalysisFileCache : NSObject {
    NSMutableDictionary *_cache;
    int _sequenceNumber;
    BOOL _cacheDirty;
    NTKTaskScheduler *_taskScheduler;
}




+(id)sharedInstance;
-(BOOL)_load;
-(BOOL)_save;
-(id)init;
-(id)photoAnalysisForIdentifier:(id)arg0 ;
-(void)_dirtyCache;
-(void)dealloc;
-(void)setPhotoAnalysis:(id)arg0 forIdentifier:(id)arg1 ;


@end


#endif