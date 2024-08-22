// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCONCEPTINDEXUTILITIES_H
#define HKCONCEPTINDEXUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKConceptIndexUtilities : NSObject



+(BOOL)applyConcepts:(id)arg0 toIndexableObject:(id)arg1 keyPath:(id)arg2 error:(*id)arg3 ;
+(BOOL)assignError:(*id)arg0 forInvalidKeyPath:(id)arg1 inClass:(Class)arg2 ;
+(id)conceptsForIndexedConcepts:(id)arg0 expectedCount:(NSInteger)arg1 context:(id)arg2 error:(*id)arg3 ;
+(id)firstComponentForKeyPath:(id)arg0 error:(*id)arg1 ;
+(id)indexedCodingsForCodingCollections:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
+(id)keyPathRemovingFirstComponentFromKeyPath:(id)arg0 error:(*id)arg1 ;
+(id)keyPaths:(id)arg0 prefix:(id)arg1 ;
+(id)medicalCodingCollectionForIndexableObject:(id)arg0 keyPath:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif