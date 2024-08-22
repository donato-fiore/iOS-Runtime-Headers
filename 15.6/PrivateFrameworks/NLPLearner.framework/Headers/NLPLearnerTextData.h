// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLPLEARNERTEXTDATA_H
#define NLPLEARNERTEXTDATA_H

@class NSLocale, NSMutableArray;

#import <Foundation/Foundation.h>


@interface NLPLearnerTextData : NSObject

@property (nonatomic) NSUInteger iterator; // ivar: _iterator
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) NSUInteger maxSequenceLength; // ivar: _maxSequenceLength
@property (readonly, nonatomic) NSUInteger numSamples;
@property (nonatomic) BOOL processingNewRecord; // ivar: _processingNewRecord
@property (retain, nonatomic) NSMutableArray *sentences; // ivar: _sentences


+(NSUInteger)defaultMaxSequenceLength;
+(id)dataForPFL:(NSInteger)arg0 andLocale:(id)arg1 ;
+(id)dataForTask:(NSInteger)arg0 andLocale:(id)arg1 ;
+(void)initialize;
-(BOOL)addExamples:(id)arg0 ;
-(BOOL)loadFromCoreDuet:(id)arg0 ;
-(BOOL)loadFromCoreDuet:(id)arg0 withLocale:(id)arg1 andLMStreamTokenizationBlock:(id)arg2 ;
-(id)getSamples;
-(id)initWithLocale:(id)arg0 ;
-(void)addResource:(id)arg0 ;
-(void)rewind;


@end


#endif