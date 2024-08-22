// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADFORMULA_H
#define OADFORMULA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OADFormula : NSObject {
    int mType;
    OADFormulaArg mArgs;
    NSString *mName;
}




-(id)description;
-(id)initWithType:(int)arg0 arg0:(struct OADFormulaArg )arg1 arg1:(struct OADFormulaArg )arg2 arg2:(struct OADFormulaArg )arg3 ;
-(id)name;
-(int)type;
-(struct OADFormulaArg )argAtIndex:(unsigned int)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif