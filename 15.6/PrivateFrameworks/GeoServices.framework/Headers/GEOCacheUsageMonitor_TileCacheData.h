// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCACHEUSAGEMONITOR_TILECACHEDATA_H
#define GEOCACHEUSAGEMONITOR_TILECACHEDATA_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface GEOCacheUsageMonitor_TileCacheData : NSObject {
    NSMutableDictionary *_errorsDict;
}


@property (nonatomic) unsigned int byteCount; // ivar: _byteCount
@property (nonatomic) unsigned int count; // ivar: _count
@property (readonly, nonatomic) NSArray *errors;


-(BOOL)wouldWrapWithByteCount:(unsigned int)arg0 ;
-(id)init;
-(void)addErrorWithDomain:(id)arg0 code:(NSInteger)arg1 ;


@end


#endif