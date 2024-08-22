// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAVFORMULA_H
#define OAVFORMULA_H


#import <Foundation/Foundation.h>


@interface OAVFormula : NSObject



+(id)readFormula:(struct _xmlNode *)arg0 ;
+(struct OADFormulaArg )readArgument:(id)arg0 ;
+(void)readFormulasFromManager:(id)arg0 toGeometry:(id)arg1 ;


@end


#endif