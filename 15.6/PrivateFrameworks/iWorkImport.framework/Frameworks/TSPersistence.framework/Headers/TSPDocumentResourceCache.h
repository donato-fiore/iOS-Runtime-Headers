// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDOCUMENTRESOURCECACHE_H
#define TSPDOCUMENTRESOURCECACHE_H



#import "TSPFileResourceCache.h"
#import "TSPDocumentResourceRegistry.h"

@interface TSPDocumentResourceCache : TSPFileResourceCache {
    TSPDocumentResourceRegistry *_documentResourceRegistry;
}




+(id)sharedCache;
-(id)fileURLForResourceInfo:(id)arg0 ;
-(id)fileURLInCacheForResourceInfo:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 documentResourceRegistry:(id)arg1 ;
-(void)purgeLegacyCaches;


@end


#endif