// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AROBJECTDETECTIONRESULTDATA_H
#define AROBJECTDETECTIONRESULTDATA_H

@class NSString, NSArray, NSDictionary;
@protocol ARResultData, ARQATraceable;

#import <Foundation/Foundation.h>


@interface ARObjectDetectionResultData : NSObject <ARResultData, ARQATraceable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *detectedObjects; // ivar: _detectedObjects
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSDictionary *tracingEntry;


-(BOOL)isEqual:(id)arg0 ;
-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;


@end


#endif