// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSUBJECTRELIGHTINGINFERENCES_H
#define BWSUBJECTRELIGHTINGINFERENCES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BWSubjectRelightingInferences : NSObject

@property (retain, nonatomic) NSArray *lowResPersonInstanceBoundingBoxes; // ivar: _lowResPersonInstanceBoundingBoxes
@property (retain, nonatomic) NSArray *lowResPersonInstanceConfidences; // ivar: _lowResPersonInstanceConfidences
@property (retain, nonatomic) NSArray *lowResPersonInstanceMasks; // ivar: _lowResPersonInstanceMasks
@property (retain, nonatomic) *__CVBuffer personMask; // ivar: _personMask
@property (retain, nonatomic) *__CVBuffer skinMask; // ivar: _skinMask
@property (retain, nonatomic) NSArray *skinToneClassificationsForFaces; // ivar: _skinToneClassificationsForFaces


-(void)dealloc;


@end


#endif