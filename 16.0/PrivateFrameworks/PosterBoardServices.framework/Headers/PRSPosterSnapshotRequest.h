// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSPOSTERSNAPSHOTREQUEST_H
#define PRSPOSTERSNAPSHOTREQUEST_H

@class NSString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface PRSPosterSnapshotRequest : NSObject <BSXPCSecureCoding>



@property (readonly, nonatomic) NSInteger configurationType; // ivar: _configurationType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *focusModeUUID; // ivar: _focusModeUUID
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat imageScaleRelativeToScreen; // ivar: _imageScaleRelativeToScreen
@property (readonly, nonatomic) NSUInteger maxCount; // ivar: _maxCount
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant


+(BOOL)supportsBSXPCSecureCoding;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithFocusModeUUID:(id)arg0 configurationType:(NSInteger)arg1 variant:(NSInteger)arg2 options:(NSUInteger)arg3 maxCount:(NSUInteger)arg4 ;
-(id)initWithFocusModeUUID:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif