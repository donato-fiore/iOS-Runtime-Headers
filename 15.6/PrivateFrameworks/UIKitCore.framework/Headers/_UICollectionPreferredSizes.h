// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONPREFERREDSIZES_H
#define _UICOLLECTIONPREFERREDSIZES_H

@class NSMutableDictionary, NSMutableIndexSet, NSString, NSSet, NSIndexSet;
@protocol _UICollectionPreferredSizes, NSCopying, _UICollectionLayoutAuxillaryOffsets;

#import <Foundation/Foundation.h>


@interface _UICollectionPreferredSizes : NSObject <_UICollectionPreferredSizes, NSCopying>

 {
    NSMutableDictionary *_sizes;
    NSMutableIndexSet *_indexes;
    NSMutableDictionary *_supplementarySizesDict;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *elementKinds;
@property (nonatomic) NSInteger frameOffset; // ivar: _frameOffset
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexSet *indexes;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<_UICollectionLayoutAuxillaryOffsets> *supplementaryBaseOffsets; // ivar: _supplementaryBaseOffsets


-(BOOL)containsSupplementaryOffsets:(id)arg0 ;
-(BOOL)hasSizes;
-(id)copyByDirtyingPreferredSizes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSizes:(id)arg0 indexes:(id)arg1 supplementarySizesDict:(id)arg2 frameOffset:(NSInteger)arg3 supplementaryBaseOffsets:(id)arg4 ;
-(id)objectAtIndexedSubscript:(NSInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)preferredSizesApplyingFrameOffset:(NSInteger)arg0 supplementaryBaseOffsets:(id)arg1 ;
-(void)addPreferredSize:(id)arg0 forSupplementaryWithElementKind:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSInteger)arg1 ;


@end


#endif