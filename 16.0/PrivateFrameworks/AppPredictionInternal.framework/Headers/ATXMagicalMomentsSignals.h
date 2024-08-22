// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMAGICALMOMENTSSIGNALS_H
#define ATXMAGICALMOMENTSSIGNALS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXMagicalMomentsSignals : NSObject

@property (readonly, nonatomic) NSInteger anchorType; // ivar: _anchorType
@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSInteger pmmReason; // ivar: _pmmReason
@property (readonly, nonatomic) NSUInteger predictionIndex; // ivar: _predictionIndex
@property (readonly, nonatomic) NSUInteger predictionSource; // ivar: _predictionSource
@property (readonly, nonatomic) NSDictionary *reasonMetadata; // ivar: _reasonMetadata


+(NSUInteger)pmmReasonToATXSuggestionReason:(NSInteger)arg0 ;
-(NSUInteger)atxReason;
-(id)init;
-(id)initWithPredictionSource:(NSUInteger)arg0 pmmReason:(NSInteger)arg1 reasonMetadata:(id)arg2 confidence:(CGFloat)arg3 anchorType:(NSInteger)arg4 index:(NSUInteger)arg5 ;


@end


#endif