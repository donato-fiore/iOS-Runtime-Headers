// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECMAPPINGCONTEXT_H
#define ECMAPPINGCONTEXT_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface ECMappingContext : NSObject {
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> mIndexToMappedIndex;
    NSMutableDictionary *mSheetNameToMappedIndex;
    *__CFDictionary mObjectToMappingInfo;
    NSMutableArray *mMappingInfos;
}




+(id)mappingContext;
-(*void)mappedSheetNames;
-(NSUInteger)mappedSheetIndexForSheetIndex:(NSUInteger)arg0 ;
-(NSUInteger)mappedSheetIndexForSheetName:(id)arg0 ;
-(NSUInteger)mappingInfoCount;
-(id)init;
-(id)mappingInfoAtIndex:(NSUInteger)arg0 ;
-(id)mappingInfoForObject:(id)arg0 ;
-(void)associateMappingInfo:(id)arg0 withSheetName:(id)arg1 andSheetIndex:(NSUInteger)arg2 andObject:(id)arg3 ;
-(void)dealloc;


@end


#endif