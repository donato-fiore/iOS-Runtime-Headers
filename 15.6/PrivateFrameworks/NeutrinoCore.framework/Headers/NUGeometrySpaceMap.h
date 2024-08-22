// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUGEOMETRYSPACEMAP_H
#define NUGEOMETRYSPACEMAP_H

@class NSMutableDictionary;
@protocol NSCopying, NUTaggedSpaceMapping, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUGeometrySpaceMap : NSObject <NSCopying, NUTaggedSpaceMapping>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_spaces;
}




+(BOOL)_canReduceSpaces:(id)arg0 withSpaces:(id)arg1 ;
+(id)_reduceSpaces:(id)arg0 withSpaces:(id)arg1 ;
-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)spaceForKey:(id)arg0 ;
-(id)spacesForKey:(id)arg0 ;
-(id)taggedSpacesForKey:(id)arg0 ;
-(id)transformWithSourceSpace:(id)arg0 destinationSpace:(id)arg1 error:(*id)arg2 ;
-(void)addTagNode:(id)arg0 ;
-(void)applyTransform:(id)arg0 ;
-(void)enumerateSpacesUsingBlock:(id)arg0 ;
-(void)mergeWithSpaceMap:(id)arg0 ;
-(void)setSpace:(id)arg0 forKey:(id)arg1 ;
-(void)setSpaces:(id)arg0 forKey:(id)arg1 ;
-(void)setSpacesFromMap:(id)arg0 andPruneAgainstTagNode:(id)arg1 withPath:(id)arg2 ;


@end


#endif