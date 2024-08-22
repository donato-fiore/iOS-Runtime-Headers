// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTASSETREADERCOMPOSITIONINSTRUCTION_H
#define PTASSETREADERCOMPOSITIONINSTRUCTION_H

@class NSString, NSArray;
@protocol AVVideoCompositionInstruction;

#import <Foundation/Foundation.h>

#import "PTAssetReader.h"

@interface PTAssetReaderCompositionInstruction : NSObject <AVVideoCompositionInstruction>



@property (weak, nonatomic) PTAssetReader *assetReader; // ivar: _assetReader
@property (nonatomic) int auxvTrackID; // ivar: _auxvTrackID
@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int passthroughTrackID;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property (nonatomic) int videTrackID; // ivar: _videTrackID




@end


#endif