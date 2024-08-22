// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUINMEMORYLIMITEDIMAGETABLE_H
#define PUINMEMORYLIMITEDIMAGETABLE_H

@class NSCache;


#import "PUTemporaryImageTable.h"

@interface PUInMemoryLimitedImageTable : PUTemporaryImageTable {
    NSCache *_memoryCache;
}




-(id)imageForItemAtIndex:(NSUInteger)arg0 ;
-(void)removeItemAtIndex:(NSUInteger)arg0 ;
-(void)setImage:(id)arg0 forItemAtIndex:(NSUInteger)arg1 ;


@end


#endif