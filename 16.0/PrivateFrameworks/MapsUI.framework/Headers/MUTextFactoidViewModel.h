// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUTEXTFACTOIDVIEWMODEL_H
#define MUTEXTFACTOIDVIEWMODEL_H

@class NSString;


#import "MUFactoidViewModel.h"

@interface MUTextFactoidViewModel : MUFactoidViewModel {
    NSString *_symbolName;
    NSString *_titleString;
    NSString *_valueString;
}




-(id)buildSymbolWithFont:(id)arg0 ;
-(id)initWithTitle:(id)arg0 valueString:(id)arg1 symbolName:(id)arg2 ;
-(id)symbolName;
-(id)titleString;
-(id)valueString;


@end


#endif