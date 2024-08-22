// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMEMORYPROPERTYSET_H
#define PHMEMORYPROPERTYSET_H

@class NSString;
@protocol PHMemoryPropertySet;

#import <Foundation/Foundation.h>

#import "PHMemory.h"

@interface PHMemoryPropertySet : NSObject <PHMemoryPropertySet>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PHMemory *memory; // ivar: _memory
@property (readonly) Class superclass;


+(BOOL)isToMany;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertiesToPrefetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 memory:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif