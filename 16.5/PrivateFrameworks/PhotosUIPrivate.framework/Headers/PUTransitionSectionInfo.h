// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTRANSITIONSECTIONINFO_H
#define PUTRANSITIONSECTIONINFO_H

@class NSIndexPath, NSArray, NSIndexSet;

#import <Foundation/Foundation.h>


@interface PUTransitionSectionInfo : NSObject

@property (retain, nonatomic) NSIndexPath *anchorRealPath; // ivar: _anchorRealPath
@property (nonatomic) PUGridCoordinates anchorShiftOffset; // ivar: _anchorShiftOffset
@property (nonatomic) NSInteger contiguousRows; // ivar: _contiguousRows
@property (nonatomic) NSInteger transitionSection; // ivar: _transitionSection
@property (retain, nonatomic) NSArray *visualRowStartMarkers; // ivar: _visualRowStartMarkers
@property (retain, nonatomic) NSIndexSet *visualSections; // ivar: _visualSections


-(id)description;
-(id)init;


@end


#endif