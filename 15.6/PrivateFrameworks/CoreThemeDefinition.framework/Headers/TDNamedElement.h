// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDNAMEDELEMENT_H
#define TDNAMEDELEMENT_H

@class NSManagedObject, NSDate, NSNumber, NSString;


#import "TDElementProduction.h"

@interface TDNamedElement : NSManagedObject

@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) TDElementProduction *production;




@end


#endif