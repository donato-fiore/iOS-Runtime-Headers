// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUPATHSET_H
#define TSUPATHSET_H

@class NSMutableSet, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSUPathSet.h"

@interface TSUPathSet : NSObject <NSCopying>

 {
    NSMutableSet *mPaths;
    NSMutableDictionary *mBasePathToNumberMap;
    TSUPathSet *mUnderlyingSet;
}




+(id)parseNumberOutOfBasename:(id)arg0 hasNumber:(*BOOL)arg1 number:(*unsigned int)arg2 ;
+(void)processPath:(id)arg0 base:(*id)arg1 hasBaseNumber:(*BOOL)arg2 baseNumber:(*unsigned int)arg3 extension:(*id)arg4 ;
-(BOOL)isPathUsed:(id)arg0 ;
-(id)addPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPaths:(id)arg0 basePathToNumberMap:(id)arg1 ;
-(void)dealloc;
-(void)pathIsNoLongerUsed:(id)arg0 ;
-(void)pathIsUsed:(id)arg0 ;
-(void)setUnderlyingPathSet:(id)arg0 ;
-(void)unionPathSet:(id)arg0 ;


@end


#endif