// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUGEOMETRYSPACEMAP_H
#define NUGEOMETRYSPACEMAP_H

@class NSMutableDictionary;
@protocol NSCopying, NUTaggedSpaceMapping;

#import <Foundation/Foundation.h>


@interface NUGeometrySpaceMap : NSObject <NSCopying, NUTaggedSpaceMapping>



@property (retain) NSMutableDictionary *spaces; // ivar: _spaces


+(BOOL)_canReduceSpaces:(id)arg0 withSpaces:(id)arg1 ;
+(id)_reduceSpaces:(id)arg0 withSpaces:(id)arg1 ;
-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSpaceMap:(id)arg0 ;
-(id)spaceForKey:(id)arg0 ;
-(id)spacesForKey:(id)arg0 ;
-(id)taggedSpacesForKey:(id)arg0 ;
-(id)transformWithSourceSpace:(id)arg0 destinationSpace:(id)arg1 error:(*id)arg2 ;
-(void)addTagNode:(id)arg0 ;
-(void)applyTransform:(id)arg0 ;
-(void)mergeWithSpaceMap:(id)arg0 ;
-(void)setSpace:(id)arg0 forKey:(id)arg1 ;


@end


#endif