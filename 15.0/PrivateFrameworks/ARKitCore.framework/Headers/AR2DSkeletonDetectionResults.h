// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AR2DSKELETONDETECTIONRESULTS_H
#define AR2DSKELETONDETECTIONRESULTS_H

@class NSString, NSArray;
@protocol AREspressoTensorResultData, NSCopying;

#import <Foundation/Foundation.h>


@interface AR2DSkeletonDetectionResults : NSObject <AREspressoTensorResultData, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *detectedSkeletons; // ivar: _detectedSkeletons
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif