// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCERESULT_H
#define BWINFERENCERESULT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface BWInferenceResult : NSObject

@property (readonly, nonatomic) int inferenceType; // ivar: _inferenceType
@property (readonly, copy, nonatomic) NSDictionary *inferences; // ivar: _inferences
@property (readonly, copy, nonatomic) NSString *preventionReason; // ivar: _preventionReason
@property (readonly, nonatomic) ? timestamp; // ivar: _timestamp
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)description;
-(id)initWithInferenceType:(int)arg0 inferences:(id)arg1 atTimestamp:(struct ? )arg2 ;
-(id)initWithInferenceType:(int)arg0 preventionReason:(id)arg1 atTimestamp:(struct ? )arg2 ;
-(id)initWithResult:(id)arg0 replacementInferences:(id)arg1 replacementPreventionReason:(id)arg2 ;
-(void)dealloc;


@end


#endif