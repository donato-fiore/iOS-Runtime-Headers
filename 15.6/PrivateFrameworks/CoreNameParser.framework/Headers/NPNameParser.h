// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPNAMEPARSER_H
#define NPNAMEPARSER_H


#import <Foundation/Foundation.h>

#import "NPNameComponentsData.h"
#import "NPHMMClassifier.h"

@interface NPNameParser : NSObject {
    CGFloat _confidenceThreshold;
    NPNameComponentsData *_nameComponentsData;
}


@property (retain) NPHMMClassifier *classifier; // ivar: _classifier


-(BOOL)isPrefix:(id)arg0 ;
-(BOOL)isSuffix:(id)arg0 ;
-(NSUInteger)frequencyOfLatinFamilyName:(id)arg0 ;
-(NSUInteger)frequencyOfLatinGivenName:(id)arg0 ;
-(NSUInteger)genderMajorityForGivenName:(id)arg0 ;
-(NSUInteger)namingTraditionForName:(id)arg0 ;
-(id)init;
-(id)normalizeFullname:(id)arg0 ;
-(id)normalizedAffix:(id)arg0 ;
-(id)parseChineseName:(id)arg0 ;
-(id)parseChineseName:(id)arg0 normalize:(BOOL)arg1 ;
-(id)parseFullnameWithDefaultHMMClassifier:(id)arg0 ;
-(id)parseFullnameWithDefaultHMMClassifier:(id)arg0 normalize:(BOOL)arg1 score:(*CGFloat)arg2 ;
-(id)parseJapaneseName:(id)arg0 ;
-(id)parseJapaneseName:(id)arg0 normalize:(BOOL)arg1 ;
-(id)parseKoreanName:(id)arg0 ;
-(id)parseKoreanName:(id)arg0 normalize:(BOOL)arg1 ;
-(id)parseLatinName:(id)arg0 score:(*CGFloat)arg1 ;
-(id)personNameCompomentsFromPrefix:(id)arg0 suffix:(id)arg1 givenNames:(id)arg2 middleNames:(id)arg3 familyNames:(id)arg4 ;
-(id)personNameComponentsFromString:(id)arg0 ;
-(struct _CFBurstTrie *)sharedNameFrequencyTrieRef;
-(void)dealloc;


@end


#endif