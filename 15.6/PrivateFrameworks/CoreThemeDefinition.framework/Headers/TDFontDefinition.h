// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDFONTDEFINITION_H
#define TDFONTDEFINITION_H

@class NSManagedObject, NSNumber, NSDate, NSString;


#import "TDMetafontSelector.h"

@interface TDFontDefinition : NSManagedObject

@property (retain, nonatomic) NSNumber *baselineOffset;
@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSString *postscriptName;
@property (retain, nonatomic) TDMetafontSelector *selector;




@end


#endif