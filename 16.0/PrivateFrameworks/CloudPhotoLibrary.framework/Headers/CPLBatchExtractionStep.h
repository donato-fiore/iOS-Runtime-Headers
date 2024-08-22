// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLBATCHEXTRACTIONSTEP_H
#define CPLBATCHEXTRACTIONSTEP_H

@class NSString;
@protocol CPLBatchExtractionStrategyStorage;

#import <Foundation/Foundation.h>


@interface CPLBatchExtractionStep : NSObject

@property (readonly, copy, nonatomic) NSString *scopeIdentifier; // ivar: _scopeIdentifier
@property (readonly, nonatomic) NSObject<CPLBatchExtractionStrategyStorage> *storage; // ivar: _storage


-(BOOL)extractToBatch:(id)arg0 maximumCount:(NSUInteger)arg1 maximumResourceSize:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg0 ;
-(id)description;
-(id)initWithStorage:(id)arg0 scopeIdentifier:(id)arg1 ;
-(id)shortDescription;
-(void)reset;
-(void)resetConditionallyFromNewIncomingChange:(id)arg0 ;


@end


#endif