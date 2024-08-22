// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARBODYANCHOR_H
#define ARBODYANCHOR_H

@class NSString;
@protocol ARTrackable;


#import "ARAnchor.h"
#import "ARCoreRESkeletonResult.h"
#import "ARBody2D.h"
#import "ARSkeleton3D.h"

@interface ARBodyAnchor : ARAnchor <ARTrackable>

 {
    BOOL _tracked;
    CGFloat _estimatedScaleFactor;
    ARCoreRESkeletonResult *_skeletonData;
    ARBody2D *_referenceBody;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat estimatedScaleFactor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTracked;
@property (readonly, nonatomic) ARBody2D *referenceBody;
@property (readonly, nonatomic) ARSkeleton3D *skeleton; // ivar: _skeleton
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToARBodyAnchor:(id)arg0 ;
-(id)copyWithTrackedState:(BOOL)arg0 ;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 transform:(struct ? )arg1 tracked:(BOOL)arg2 skeletonData:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif