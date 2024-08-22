// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSKEYWORDANALYZERNDAPIRESULT_H
#define CSKEYWORDANALYZERNDAPIRESULT_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CSKeywordAnalyzerNDAPIResult : NSObject <NSCopying>



@property (nonatomic) NSUInteger bestEnd; // ivar: _bestEnd
@property (nonatomic) NSUInteger bestPhrase; // ivar: _bestPhrase
@property (nonatomic) float bestScore; // ivar: _bestScore
@property (nonatomic) NSUInteger bestStart; // ivar: _bestStart
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) BOOL isEarlyWarning; // ivar: _isEarlyWarning
@property (nonatomic) BOOL isRescoring; // ivar: _isRescoring
@property (nonatomic) NSUInteger phId; // ivar: _phId
@property (nonatomic) NSUInteger samplesAtFire; // ivar: _samplesAtFire
@property (nonatomic) NSUInteger samplesFed; // ivar: _samplesFed
@property (nonatomic) NSUInteger startSampleCount; // ivar: _startSampleCount


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif