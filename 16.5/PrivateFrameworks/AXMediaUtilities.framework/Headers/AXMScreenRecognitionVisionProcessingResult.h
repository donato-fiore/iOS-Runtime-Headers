// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMSCREENRECOGNITIONVISIONPROCESSINGRESULT_H
#define AXMSCREENRECOGNITIONVISIONPROCESSINGRESULT_H

@class NSData, NSArray;

#import <Foundation/Foundation.h>


@interface AXMScreenRecognitionVisionProcessingResult : NSObject

@property (nonatomic) BOOL sameScreenCapResult; // ivar: _sameScreenCapResult
@property (retain, nonatomic) NSData *screenEquivalenceToken; // ivar: _screenEquivalenceToken
@property (retain, nonatomic) NSArray *sortedFeatures; // ivar: _sortedFeatures




@end


#endif