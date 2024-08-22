// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPDICTIONARYMATCHINGRULE_H
#define TPDICTIONARYMATCHINGRULE_H


#import <Foundation/Foundation.h>


@interface TPDictionaryMatchingRule : NSObject



+(id)andMatch:(id)arg0 ;
+(id)falseMatch;
+(id)fieldExists:(id)arg0 ;
+(id)fieldMatch:(id)arg0 fieldRegex:(id)arg1 ;
+(id)notMatch:(id)arg0 ;
+(id)orMatch:(id)arg0 ;
+(id)trueMatch;


@end


#endif