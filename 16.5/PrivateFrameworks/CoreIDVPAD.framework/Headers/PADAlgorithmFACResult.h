// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PADALGORITHMFACRESULT_H
#define PADALGORITHMFACRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PADAlgorithmFACResult : NSObject

@property (nonatomic) CGFloat assessment; // ivar: _assessment
@property (retain, nonatomic) NSArray *faceprints; // ivar: _faceprints
@property (nonatomic) BOOL isHeadMovementDetected; // ivar: _isHeadMovementDetected
@property (retain, nonatomic) NSArray *referenceFrameIndices; // ivar: _referenceFrameIndices




@end


#endif