// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMCAPTURECOORDINATIONINFO_H
#define CAMCAPTURECOORDINATIONINFO_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface CAMCaptureCoordinationInfo : NSObject

@property (readonly, nonatomic, getter=isEV0ForHDREV0Pair) BOOL EV0ForHDREV0Pair;
@property (readonly, nonatomic, getter=isHDR) BOOL HDR;
@property (readonly, nonatomic, getter=isHDRForHDREV0Pair) BOOL HDRForHDREV0Pair;
@property (readonly, nonatomic) NSSet *allExpectedResultSpecifiers; // ivar: _allExpectedResultSpecifiers
@property (readonly, nonatomic, getter=isFiltered) BOOL filtered;
@property (readonly, nonatomic, getter=isFilteredImageForFilteredPair) BOOL filteredImageForFilteredPair;
@property (readonly, nonatomic, getter=isFinalExpectedStillImageResult) BOOL finalExpectedStillImageResult;
@property (readonly, nonatomic, getter=isFinalExpectedVideoResult) BOOL finalExpectedVideoResult;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isOverCapture) BOOL overCapture;
@property (readonly, nonatomic, getter=isPrimaryAssetForOverCapturePair) BOOL primaryAssetForOverCapturePair;
@property (readonly, nonatomic) BOOL representsFinalProcessedStillImage;
@property (readonly, nonatomic) BOOL representsFinalProcessedVideo;
@property (readonly, nonatomic) NSUInteger resultSpecifiers; // ivar: _resultSpecifiers
@property (readonly, nonatomic, getter=isSecondaryAssetForOverCapturePair) BOOL secondaryAssetForOverCapturePair;
@property (readonly, nonatomic, getter=isUnfilteredImageForFilteredPair) BOOL unfilteredImageForFilteredPair;


-(id)description;
-(id)initWithIdentifier:(id)arg0 allExpectedResultSpecifiers:(id)arg1 resultSpecifiers:(NSUInteger)arg2 ;


@end


#endif