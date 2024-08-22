// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNLIVEVIDEOSOURCEUSAGE_H
#define KNLIVEVIDEOSOURCEUSAGE_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KNLiveVideoSourceUsage : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *entriesForLiveVideoSourceUUIDs; // ivar: _entriesForLiveVideoSourceUUIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)usesSource:(id)arg0 withBackgroundKind:(NSInteger)arg1 ;
-(BOOL)usesSourceWithUUID:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEntriesForLiveVideoSourceUUIDs:(id)arg0 ;
-(id)initWithLiveVideoInfos:(id)arg0 ;
-(id)initWithLiveVideoSourceUUIDMessages:(*void)arg0 entryMessages:(*void)arg1 unarchiver:(id)arg2 ;
-(id)initWithMergedUsages:(id)arg0 ;
-(id)usedSourcesInContext:(id)arg0 ;
-(void)saveToLiveVideoSourceUUIDMessages:(*void)arg0 entryMessages:(*void)arg1 archiver:(id)arg2 ;


@end


#endif