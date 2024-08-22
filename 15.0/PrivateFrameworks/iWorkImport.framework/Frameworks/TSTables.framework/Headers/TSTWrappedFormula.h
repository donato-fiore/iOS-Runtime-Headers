// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTWRAPPEDFORMULA_H
#define TSTWRAPPEDFORMULA_H



#import "TSTFormula.h"

@interface TSTWrappedFormula : TSTFormula

@property (nonatomic) unsigned short functionIndex; // ivar: _functionIndex


+(BOOL)storageExceedsMaxFormulaLength:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)nodesToCheckForBareArgumentPlaceholders;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)reparseWithStorage:(id)arg0 adjustExpressionTree:(id)arg1 ;


@end


#endif