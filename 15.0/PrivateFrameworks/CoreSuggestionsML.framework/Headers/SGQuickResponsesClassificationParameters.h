// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGQUICKRESPONSESCLASSIFICATIONPARAMETERS_H
#define SGQUICKRESPONSESCLASSIFICATIONPARAMETERS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesClassificationParameters : NSObject

@property (readonly, nonatomic) CGFloat dynamicLabelSamplingRate; // ivar: _dynamicLabelSamplingRate
@property (readonly, nonatomic) NSUInteger maxPromptLength; // ivar: _maxPromptLength
@property (readonly, nonatomic) CGFloat maxPromptWindowSeconds; // ivar: _maxPromptWindowSeconds
@property (readonly, nonatomic) NSUInteger maxReplyLength; // ivar: _maxReplyLength
@property (readonly, nonatomic) CGFloat negativeSamplingRate; // ivar: _negativeSamplingRate
@property (readonly, nonatomic) CGFloat positiveSamplingRate; // ivar: _positiveSamplingRate
@property (readonly, nonatomic) NSString *promptJoiningString; // ivar: _promptJoiningString


-(id)initWithDictionary:(id)arg0 language:(id)arg1 ;


@end


#endif