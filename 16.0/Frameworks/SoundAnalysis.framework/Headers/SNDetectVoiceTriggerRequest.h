// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNDETECTVOICETRIGGERREQUEST_H
#define SNDETECTVOICETRIGGERREQUEST_H

@class MLModel, NSArray, NSString;
@protocol SNAnalyzerCreating, SNRequest;

#import <Foundation/Foundation.h>


@interface SNDetectVoiceTriggerRequest : NSObject <SNAnalyzerCreating, SNRequest>

 {
    MLModel *_model;
}


@property (nonatomic) NSInteger blocksBetweenTriggers; // ivar: _blocksBetweenTriggers
@property (copy, nonatomic) NSArray *commands; // ivar: _commands
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger hopSizeSamples; // ivar: _hopSizeSamples
@property (readonly, nonatomic) CGFloat sampleRate; // ivar: _sampleRate
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)initWithModel:(id)arg0 dictionary:(id)arg1 error:(*id)arg2 ;


@end


#endif