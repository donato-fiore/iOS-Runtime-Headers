// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDFONTSIZEDEFINITION_H
#define TDFONTSIZEDEFINITION_H

@class NSManagedObject, NSDate, NSNumber;


#import "TDMetafontSizeSelector.h"

@interface TDFontSizeDefinition : NSManagedObject

@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSNumber *pointSize;
@property (retain, nonatomic) TDMetafontSizeSelector *selector;




@end


#endif