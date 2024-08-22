// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVPERSONDEDUPERPROFILE_H
#define PVPERSONDEDUPERPROFILE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PVPersonDeduperProfile : NSObject <NSCopying>



@property (nonatomic) NSUInteger faceProcessingVersion; // ivar: _faceProcessingVersion
@property (nonatomic) CGFloat fuzzyMaximumDistance; // ivar: _fuzzyMaximumDistance
@property (nonatomic) CGFloat normalMaximumDistance; // ivar: _normalMaximumDistance
@property (readonly, nonatomic) BOOL shouldAdjustThresholdOnAgeType;
@property (nonatomic) BOOL shouldRelaxThreshold; // ivar: _shouldRelaxThreshold
@property (nonatomic) CGFloat strictMaximumDistance; // ivar: _strictMaximumDistance


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif