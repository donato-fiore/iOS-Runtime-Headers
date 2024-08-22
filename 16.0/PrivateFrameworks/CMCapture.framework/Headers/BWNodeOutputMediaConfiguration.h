// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWNODEOUTPUTMEDIACONFIGURATION_H
#define BWNODEOUTPUTMEDIACONFIGURATION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "BWFormatRequirements.h"

@interface BWNodeOutputMediaConfiguration : NSObject {
    NSString *_associatedAttachedMediaKey;
    NSArray *_indexesOfInputsWhichDrivesThisOutput;
    NSString *_attachedMediaKeyOfInputWhichDrivesThisOutput;
    int _indexOfInputWhichDrivesThisOutput;
    BOOL _performsAttachedMediaRemapping;
}


@property (copy, nonatomic) NSString *attachedMediaKeyOfInputWhichDrivesThisOutput;
@property (retain, nonatomic) BWFormatRequirements *formatRequirements; // ivar: _formatRequirements
@property (nonatomic) int indexOfInputWhichDrivesThisOutput;
@property (copy, nonatomic) NSArray *indexesOfInputsWhichDrivesThisOutput;
@property (nonatomic) int owningNodeRetainedBufferCount; // ivar: _owningNodeRetainedBufferCount
@property (nonatomic) int passthroughMode; // ivar: _passthroughMode
@property (readonly, nonatomic) BOOL performsAttachedMediaRemapping;
@property (nonatomic) BOOL pixelBufferPoolProvidesBackPressure; // ivar: _pixelBufferPoolProvidesBackPressure
@property (nonatomic) BOOL providesDataBufferPool; // ivar: _providesDataBufferPool
@property (nonatomic) BOOL providesPixelBufferPool; // ivar: _providesPixelBufferPool


-(BOOL)isDrivenByInputWithIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)_setAssociatedAttachedMediaKey:(id)arg0 ;
-(void)dealloc;


@end


#endif