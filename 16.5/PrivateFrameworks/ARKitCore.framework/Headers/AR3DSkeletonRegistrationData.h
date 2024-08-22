// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AR3DSKELETONREGISTRATIONDATA_H
#define AR3DSKELETONREGISTRATIONDATA_H

@class NSString;
@protocol ARResultData, NSCopying;

#import <Foundation/Foundation.h>


@interface AR3DSkeletonRegistrationData : NSObject <ARResultData, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float estimatedScaleFactor; // ivar: _estimatedScaleFactor
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) ? visionTransform; // ivar: _visionTransform


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif