// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGLONGTAILADDITIONALOPTIONS_H
#define PGLONGTAILADDITIONALOPTIONS_H


#import <Foundation/Foundation.h>


@interface PGLongTailAdditionalOptions : NSObject

@property (nonatomic) NSUInteger qualityPercentile; // ivar: _qualityPercentile
@property (nonatomic) NSUInteger topTierAestheticScoreValue; // ivar: _topTierAestheticScoreValue
@property (nonatomic) NSUInteger verifiedPersonScoreValue; // ivar: _verifiedPersonScoreValue


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif