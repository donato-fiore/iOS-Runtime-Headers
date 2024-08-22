// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETPROPERTYSET_H
#define PHASSETPROPERTYSET_H

@class NSString;
@protocol PHAssetPropertySet;

#import <Foundation/Foundation.h>

#import "PHAsset.h"

@interface PHAssetPropertySet : NSObject <PHAssetPropertySet>



@property (readonly, weak, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)inverseIsToMany;
+(BOOL)isToMany;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertiesToPrefetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif