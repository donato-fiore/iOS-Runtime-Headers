// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODEANCHORMODELSUGGESTION_H
#define ATXMODEANCHORMODELSUGGESTION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXModeAnchorModelSuggestion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *anchorType; // ivar: _anchorType
@property (readonly, nonatomic) CGFloat classConditionalProbability; // ivar: _classConditionalProbability
@property (readonly, nonatomic) BOOL isStart; // ivar: _isStart
@property (readonly, nonatomic) NSString *modeUUID; // ivar: _modeUUID
@property (readonly, nonatomic) NSUInteger numUniqueOccurrencesAfterAnchor; // ivar: _numUniqueOccurrencesAfterAnchor
@property (readonly, nonatomic) CGFloat posteriorProbability; // ivar: _posteriorProbability
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) NSArray *serializedTriggers; // ivar: _serializedTriggers


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModeUUID:(id)arg0 isStart:(BOOL)arg1 anchorType:(id)arg2 score:(CGFloat)arg3 numUniqueOccurrencesAfterAnchor:(NSUInteger)arg4 posteriorProbability:(CGFloat)arg5 classConditionalProbability:(CGFloat)arg6 serializedTriggers:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif