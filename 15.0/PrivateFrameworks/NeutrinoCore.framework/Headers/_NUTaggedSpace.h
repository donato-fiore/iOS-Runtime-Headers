// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NUTAGGEDSPACE_H
#define _NUTAGGEDSPACE_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NUSpace.h"

@interface _NUTaggedSpace : NSObject <NSCopying>

 {
    NSMutableArray *_tagNodes;
}


@property (readonly) NUSpace *space; // ivar: _space


-(BOOL)hasTransform;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTaggedImageSpace:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSpace:(id)arg0 ;
-(id)tagNodes;
-(void)addTagNode:(id)arg0 ;
-(void)addTagNodes:(id)arg0 ;
-(void)mergeSpace:(id)arg0 ;


@end


#endif