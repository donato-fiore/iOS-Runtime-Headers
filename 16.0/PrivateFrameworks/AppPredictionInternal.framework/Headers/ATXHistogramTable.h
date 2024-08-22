// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHISTOGRAMTABLE_H
#define ATXHISTOGRAMTABLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"
#import "ATXBackgroundSaver.h"

@interface ATXHistogramTable : NSObject <NSSecureCoding>

 {
    HTGuardedData _private_unsafeGuardedData;
    unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>, std::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>>> _guardedData;
    _ATXDataStore *_datastore;
    ATXBackgroundSaver *_saver;
    NSInteger _blobType;
}




+(BOOL)supportsSecureCoding;
-(BOOL)lookup:(id)arg0 into:(*unsigned short)arg1 ;
-(id)allKeys;
-(id)allKeysFilteredBy:(id)arg0 ;
-(id)histogramTableDict;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDatastore:(id)arg0 ;
-(id)initWithDatastore:(id)arg0 blobType:(NSInteger)arg1 ;
-(id)initWithDict:(id)arg0 usedIds:(id)arg1 datastore:(id)arg2 blobType:(NSInteger)arg3 ;
-(unsigned short)intern:(id)arg0 ;
-(unsigned short)remove:(id)arg0 ;
-(void)clear;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flush;


@end


#endif