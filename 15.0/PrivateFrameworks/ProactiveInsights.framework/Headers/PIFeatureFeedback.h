// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIFEATUREFEEDBACK_H
#define PIFEATUREFEEDBACK_H


#import <Foundation/Foundation.h>

#import "PIFeatureFeedbackStream.h"

@interface PIFeatureFeedback : NSObject

@property (readonly, nonatomic) PIFeatureFeedbackStream *stream; // ivar: _stream


+(BOOL)recordFeatureFeedback:(id)arg0 clientIdentifier:(id)arg1 type:(NSUInteger)arg2 date:(id)arg3 ;
-(BOOL)recordFeatureFeedback:(id)arg0 type:(NSUInteger)arg1 date:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg0 ;


@end


#endif