// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYMBOLVALIDATOR_H
#define SYMBOLVALIDATOR_H

@class NSArray;


#import "YQLRequest.h"

@interface SymbolValidator : YQLRequest {
    NSArray *_symbols;
}


@property (weak, nonatomic) id *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)didParseData;
-(void)failWithError:(id)arg0 ;
-(void)parseData:(id)arg0 ;
-(void)validateSymbol:(id)arg0 withMaxResults:(int)arg1 ;


@end


#endif