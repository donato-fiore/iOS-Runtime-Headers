// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AR3DSKELETONDETECTIONRESULTS_H
#define AR3DSKELETONDETECTIONRESULTS_H

@class NSString, NSArray;
@protocol ARResultData, NSCopying;

#import <Foundation/Foundation.h>


@interface AR3DSkeletonDetectionResults : NSObject <ARResultData, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *detectedSkeletons; // ivar: _detectedSkeletons
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif