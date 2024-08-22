// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EXFILL_H
#define EXFILL_H


#import <Foundation/Foundation.h>


@interface EXFill : NSObject



+(?)edFillFromXmlFillElement:(?)arg0 differentialFillstate;
+(?)edFillFromXmlFillElementstate;
+(?)edGradientFillFromXmlElementstate;
+(?)edPatternFillFromXmlElement:(?)arg0 differentialFillstate;
+(?)edStopFromXmlGradientElementstate;
+(id)gradientFillTypeEnumMap;
+(id)patternFillTypeEnumMap;
+(int)edGradientTypeFromXmlGradientTypeString:(id)arg0 state:(id)arg1 ;
+(int)edPatternTypeFromXmlPatternTypeString:(id)arg0 ;


@end


#endif