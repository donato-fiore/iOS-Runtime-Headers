// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTSERVERENDPOINTERFEATURES_H
#define _LTSERVERENDPOINTERFEATURES_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTServerEndpointerFeatures : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat eosLikelihood; // ivar: _eosLikelihood
@property (copy, nonatomic) NSArray *pauseCounts; // ivar: _pauseCounts
@property (nonatomic) NSInteger processedAudioDurationInMilliseconds; // ivar: _processedAudioDurationInMilliseconds
@property (nonatomic) CGFloat silencePosterior; // ivar: _silencePosterior
@property (nonatomic) NSInteger trailingSilenceDuration; // ivar: _trailingSilenceDuration
@property (nonatomic) NSInteger wordCount; // ivar: _wordCount


+(BOOL)supportsSecureCoding;
+(id)GetDefaultEndpointerFeaturesForEndpointer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponse:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif