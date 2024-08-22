// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDNAME_H
#define EDNAME_H

@class NSString;

#import <Foundation/Foundation.h>

#import "OITSUPointerKeyDictionary.h"
#import "EDFormula.h"
#import "EDString.h"

@interface EDName : NSObject {
    NSString *_formulaString;
    OITSUPointerKeyDictionary *_maxWorksheetReferences;
}


@property (readonly, nonatomic) EDFormula *formula; // ivar: _formula
@property (readonly, nonatomic) NSString *internalFunctionName;
@property (readonly, nonatomic) BOOL isInternalFunction;
@property (readonly, nonatomic) OITSUPointerKeyDictionary *maxWorksheetReferences;
@property (retain, nonatomic) EDString *nameString; // ivar: _nameString
@property (nonatomic) NSUInteger sheetIndex; // ivar: _sheetIndex


+(id)name;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEDName:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;


@end


#endif