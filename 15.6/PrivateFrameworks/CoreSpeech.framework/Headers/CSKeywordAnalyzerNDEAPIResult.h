// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSKEYWORDANALYZERNDEAPIRESULT_H
#define CSKEYWORDANALYZERNDEAPIRESULT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CSKeywordAnalyzerNDEAPIResult : NSObject

@property (nonatomic) NSUInteger bestEnd; // ivar: _bestEnd
@property (nonatomic) float bestScore; // ivar: _bestScore
@property (nonatomic) NSUInteger bestStart; // ivar: _bestStart
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) BOOL isEarlyDetect; // ivar: _isEarlyDetect
@property (nonatomic) BOOL isSecondChance; // ivar: _isSecondChance
@property (nonatomic) NSUInteger samplesFed; // ivar: _samplesFed


-(id)init;
-(id)initWithBlob:(id)arg0 isEarlyDetected:(BOOL)arg1 ;


@end


#endif