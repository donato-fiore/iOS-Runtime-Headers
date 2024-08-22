// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSFOCUSPOSTERSNAPSHOTREQUEST_H
#define PRSFOCUSPOSTERSNAPSHOTREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PRSFocusPosterSnapshotRequest : NSObject

@property (readonly, nonatomic) NSInteger configurationType; // ivar: _configurationType
@property (readonly, copy, nonatomic) NSString *focusModeUUID; // ivar: _focusModeUUID
@property (readonly, nonatomic) CGFloat imageScaleRelativeToScreen; // ivar: _imageScaleRelativeToScreen
@property (readonly, nonatomic) NSUInteger maxCount; // ivar: _maxCount
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant


-(id)init;
-(id)initWithFocusModeUUID:(id)arg0 configurationType:(NSInteger)arg1 variant:(NSInteger)arg2 options:(NSUInteger)arg3 imageScaleRelativeToScreen:(CGFloat)arg4 maxCount:(NSUInteger)arg5 ;
-(id)initWithFocusModeUUID:(id)arg0 configurationType:(NSInteger)arg1 variant:(NSInteger)arg2 options:(NSUInteger)arg3 maxCount:(NSUInteger)arg4 ;
-(id)initWithFocusModeUUID:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(id)initWithPosterRequest:(id)arg0 ;


@end


#endif