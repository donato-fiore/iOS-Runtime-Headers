// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPTPDASSETENUMERATOR_H
#define PLPTPDASSETENUMERATOR_H

@class NSArray;
@protocol PLPTPConversionSupport;

#import <Foundation/Foundation.h>

#import "PLManagedObjectContext.h"

@interface PLPTPdAssetEnumerator : NSObject {
    PLManagedObjectContext *_managedObjectContext;
    NSArray *_assetObjectIDs;
    id<PLPTPConversionSupport> *_conversionSupport;
}




+(id)enumeratorWithAssetObjectIDs:(id)arg0 managedObjectContext:(id)arg1 conversionSupport:(id)arg2 ;
-(BOOL)enumerateAssetsWithCount:(NSUInteger)arg0 fetchOffset:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(id)assetsFromOffset:(NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(id)initWithAssetObjectIDs:(id)arg0 managedObjectContext:(id)arg1 conversionSupport:(id)arg2 ;
-(void)enumerateAssetsUsingBlock:(id)arg0 ;


@end


#endif