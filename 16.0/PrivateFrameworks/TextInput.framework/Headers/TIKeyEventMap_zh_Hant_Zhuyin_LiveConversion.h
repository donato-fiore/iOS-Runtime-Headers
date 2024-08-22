// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYEVENTMAP_ZH_HANT_ZHUYIN_LIVECONVERSION_H
#define TIKEYEVENTMAP_ZH_HANT_ZHUYIN_LIVECONVERSION_H

@class Zhuyin;



@interface TIKeyEventMap_zh_Hant_Zhuyin_LiveConversion : Zhuyin



+(BOOL)supportsSecureCoding;
+(id)sharedInstance;
-(BOOL)shouldInsertZhuyinCharacterAfter:(id)arg0 ;
-(NSInteger)candidateNumberKey:(int)arg0 ;


@end


#endif