// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWCOLORLOOKUPCACHE_H
#define BWCOLORLOOKUPCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWColorLookupCache : NSObject {
    NSObject<OS_dispatch_queue> *_coreImageCacheIsolationQueue;
    NSMutableDictionary *_coreImageTableCache;
}




+(void)initialize;
-(id)blackColorLookupTable;
-(id)colorLookupTablesForFilter:(id)arg0 ;
-(id)fetchColorLookupTablesForFilter:(id)arg0 ;
-(id)identityColorLookupTable;
-(id)init;
-(id)interpolatedColorLookupTableFromTable:(id)arg0 toTable:(id)arg1 fractionComplete:(float)arg2 ;
-(id)whiteColorLookupTable;
-(void)dealloc;


@end


#endif