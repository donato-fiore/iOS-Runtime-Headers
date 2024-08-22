// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLNONOISESTRATEGY_H
#define PMLNONOISESTRATEGY_H

@class NSString;
@protocol PMLNoiseStrategy;

#import <Foundation/Foundation.h>


@interface PMLNoNoiseStrategy : NSObject <PMLNoiseStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)scaleAndAddNoiseToDenseVector:(id)arg0 usingNorm:(BOOL)arg1 scaleFactor:(*float)arg2 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(void)addNoiseToSparseMatrix:(id)arg0 ;
-(void)addNoiseToSparseVector:(id)arg0 ;


@end


#endif