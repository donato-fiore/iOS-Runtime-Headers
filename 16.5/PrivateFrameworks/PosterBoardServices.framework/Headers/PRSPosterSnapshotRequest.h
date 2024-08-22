// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERSNAPSHOTREQUEST_H
#define PRSPOSTERSNAPSHOTREQUEST_H

@class NSString, NSDictionary;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "PRSServerPosterPath.h"

@interface PRSPosterSnapshotRequest : NSObject <BSXPCSecureCoding>



@property (readonly, nonatomic) NSInteger configurationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat imageScaleRelativeToScreen; // ivar: _imageScaleRelativeToScreen
@property (readonly, nonatomic) NSUInteger options;
@property (readonly, nonatomic) PRSServerPosterPath *path; // ivar: _path
@property (readonly, copy, nonatomic) NSDictionary *requestOptions; // ivar: _requestOptions
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger variantType;


+(BOOL)supportsBSXPCSecureCoding;
+(id)contaminateRequestOptions:(id)arg0 ;
+(id)sanitizeRequestOptions:(id)arg0 ;
+(id)validOptions;
-(BOOL)_validateRequestOptionsOrAbort:(BOOL)arg0 ;
-(NSUInteger)maxCount;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 variantType:(NSInteger)arg1 options:(NSUInteger)arg2 ;
-(id)initWithConfigurationType:(NSInteger)arg0 variantType:(NSInteger)arg1 options:(NSUInteger)arg2 ;
-(id)initWithFocusModeUUID:(id)arg0 configurationType:(NSInteger)arg1 variant:(NSInteger)arg2 options:(NSUInteger)arg3 maxCount:(NSUInteger)arg4 ;
-(id)initWithFocusModeUUID:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(id)initWithFocusPosterRequest:(id)arg0 ;
-(id)initWithPath:(id)arg0 requestOptions:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif