// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EARLMDATA_H
#define _EARLMDATA_H


#import <Foundation/Foundation.h>


@interface _EARLmData : NSObject

@property (readonly, nonatomic) shared_ptr<quasar::LmData> data; // ivar: _data
@property (readonly, nonatomic) NSInteger inputType; // ivar: _inputType
@property (nonatomic) BOOL roundingEnabled; // ivar: _roundingEnabled


+(void)initialize;
-(BOOL)roomForMoreData;
-(CGFloat)maxAge;
-(CGFloat)minAge;
-(NSUInteger)queryLimit;
-(id)initWithConfiguration:(id)arg0 ncsRoot:(id)arg1 recognizerConfiguration:(id)arg2 ;
-(id)metrics;
-(id)sources;
-(void)addDocumentWithUUID:(id)arg0 content:(id)arg1 ;
-(void)addDocumentWithUUID:(id)arg0 content:(id)arg1 metadata:(id)arg2 ;
-(void)addLineWithType:(NSUInteger)arg0 uuid:(id)arg1 content:(id)arg2 ;
-(void)addNgramCountWithType:(NSUInteger)arg0 content:(id)arg1 ;
-(void)addSentenceWithType:(NSUInteger)arg0 uuid:(id)arg1 content:(id)arg2 ;
-(void)addSentenceWithType:(NSUInteger)arg0 uuid:(id)arg1 content:(id)arg2 hasWeights:(BOOL)arg3 ;
-(void)setInputFormat:(NSInteger)arg0 ;


@end


#endif