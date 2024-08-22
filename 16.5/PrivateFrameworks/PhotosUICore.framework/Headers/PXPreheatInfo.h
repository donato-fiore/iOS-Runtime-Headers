// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPREHEATINFO_H
#define PXPREHEATINFO_H

@class NSMutableIndexSet;
@protocol PXDisplayAssetFetchResult;

#import <Foundation/Foundation.h>


@interface PXPreheatInfo : NSObject

@property (nonatomic) NSInteger cachedBytes; // ivar: _cachedBytes
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *fetchResult; // ivar: _fetchResult
@property (readonly, nonatomic) BOOL finished;
@property (readonly, nonatomic) NSInteger preheatOrigin; // ivar: _preheatOrigin
@property (readonly, nonatomic) NSMutableIndexSet *preheatedIndexes; // ivar: _preheatedIndexes


-(id)initWithFetchResult:(id)arg0 origin:(NSInteger)arg1 ;
-(void)markAsFinished;


@end


#endif