// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEXCEPTIONDATE_H
#define EKEXCEPTIONDATE_H

@class NSDate;


#import "EKObject.h"

@interface EKExceptionDate : EKObject

@property (retain, nonatomic) NSDate *date;


+(Class)frozenClass;
+(id)knownIdentityKeysForComparison;
-(id)description;
-(id)initWithDate:(id)arg0 ;


@end


#endif