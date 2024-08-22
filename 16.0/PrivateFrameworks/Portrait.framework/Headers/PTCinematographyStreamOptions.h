// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTCINEMATOGRAPHYSTREAMOPTIONS_H
#define PTCINEMATOGRAPHYSTREAMOPTIONS_H

@class NSDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface PTCinematographyStreamOptions : NSObject <NSCopying, NSMutableCopying>



@property (nonatomic, setter=_setOverrideFrameSnapshotPolicy:) BOOL _overrideFrameSnapshotPolicy; // ivar: _overrideFrameSnapshotPolicy
@property (nonatomic, setter=_setSnapshotPolicy:) NSUInteger _snapshotPolicy; // ivar: _snapshotPolicy
@property (copy) NSDictionary *cinematographyParameters; // ivar: _cinematographyParameters
@property CGSize fixedFocusNormalizedRectSize; // ivar: _fixedFocusNormalizedRectSize
@property NSUInteger version; // ivar: _version


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif