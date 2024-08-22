// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFETCHRESULTDATASECTION_H
#define PXFETCHRESULTDATASECTION_H

@class PHFetchResult;


#import "PXDataSection.h"

@interface PXFetchResultDataSection : PXDataSection

@property (readonly, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult


-(NSInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithFetchResult:(id)arg0 ;
-(id)initWithOutlineObject:(id)arg0 ;
-(id)objectAtIndex:(NSInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;


@end


#endif