// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARAPPLMDATA_H
#define _EARAPPLMDATA_H

@class EARLmData, NSArray;



@interface _EARAppLmData : EARLmData {
    BOOL roundingEnabled;
    NSInteger inputType;
}


@property (readonly, nonatomic) shared_ptr<quasar::AppLmData> data; // ivar: data
@property (readonly, nonatomic) NSArray *orderedOovs;


+(void)initialize;
-(?)initWithAppLmData;
-(BOOL)roundingEnabled;
-(BOOL)setAsrProns:(id)arg0 forWord:(id)arg1 ;
-(BOOL)setProns:(id)arg0 forWord:(id)arg1 pronIsXsampa:(BOOL)arg2 ;
-(BOOL)setXsampaProns:(id)arg0 forWord:(id)arg1 ;
-(NSInteger)canAddAsrProns:(id)arg0 forWord:(id)arg1 ;
-(NSInteger)canAddProns:(id)arg0 forWord:(id)arg1 pronIsXsampa:(BOOL)arg2 ;
-(NSInteger)canAddXsampaProns:(id)arg0 forWord:(id)arg1 ;
-(NSInteger)inputType;
-(NSInteger)lmeThreshold;
-(id)addOovTokensFromSentence:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ncsRoot:(id)arg1 recognizerConfigPath:(id)arg2 ;
-(id)metrics;
-(id)supportedSlots;
-(void)addLineWithType:(NSUInteger)arg0 uuid:(id)arg1 content:(id)arg2 ;
-(void)addNgramCountWithType:(NSUInteger)arg0 content:(id)arg1 ;
-(void)addSentenceWithType:(NSUInteger)arg0 uuid:(id)arg1 content:(id)arg2 ;
-(void)addSentenceWithType:(NSUInteger)arg0 uuid:(id)arg1 content:(id)arg2 hasWeights:(BOOL)arg3 ;
-(void)generateLmeData:(id)arg0 ;
-(void)setInputFormat:(NSInteger)arg0 ;
-(void)setRoundingEnabled:(BOOL)arg0 ;


@end


#endif