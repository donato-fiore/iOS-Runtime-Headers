// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEENTITYAFFINITYVECTOR_H
#define ATXMODEENTITYAFFINITYVECTOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ATXModeEntityAffinityVector : NSObject

@property (readonly, nonatomic) NSArray *affinityVector; // ivar: _affinityVector


+(id)centroid:(id)arg0 ;
+(id)weightedCentroid:(id)arg0 ;
-(BOOL)isZeroVector;
-(CGFloat)magnitude;
-(CGFloat)scoreForMode:(NSUInteger)arg0 ;
-(id)_initWithAffinityVector:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAffinities:(id)arg0 ;
-(id)initWithAffinities:(id)arg0 shouldResize:(BOOL)arg1 ;
-(id)prettyDescription;
-(id)sortedAffinities;
-(void)resizeToUnit;


@end


#endif