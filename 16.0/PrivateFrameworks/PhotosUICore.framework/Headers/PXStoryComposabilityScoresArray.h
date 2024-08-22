// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYCOMPOSABILITYSCORESARRAY_H
#define PXSTORYCOMPOSABILITYSCORESARRAY_H

@class NSString;
@protocol PXStoryComposabilityResults, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface PXStoryComposabilityScoresArray : NSObject <PXStoryComposabilityResults, NSCopying, NSMutableCopying>

 {
    vector<PXStoryAutoEditComposabilityScores, std::allocator<PXStoryAutoEditComposabilityScores>> _scores;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithComposabilityResults:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct ? )composabilityScoresAtIndex:(NSUInteger)arg0 ;


@end


#endif