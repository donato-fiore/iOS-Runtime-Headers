// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSPACERFINDER_H
#define CPSPACERFINDER_H

@class NSMutableArray;
@protocol CPDisposable;

#import <Foundation/Foundation.h>

#import "CPZone.h"

@interface CPSpacerFinder : NSObject <CPDisposable>

 {
    CPZone *contentZone;
    CGRect zoneBounds;
    CGRect textBounds;
    ? spacerSequence;
    NSMutableArray *spacers;
    unsigned int segmentationCount;
    *? segmentations;
    *? qualityEntries;
}




-(id)initWithContentZone:(id)arg0 ;
-(id)spacers;
-(void)assessQuality;
-(void)dealloc;
-(void)determineValidity;
-(void)dispose;
-(void)finalize;
-(void)findSpacers;
-(void)initializeJunctions;
-(void)initializeSegmentations;
-(void)splitTextLines;


@end


#endif