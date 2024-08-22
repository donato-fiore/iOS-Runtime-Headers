// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHEARNEDINSTANCEDUPLICATEUTILITY_H
#define ACHEARNEDINSTANCEDUPLICATEUTILITY_H

@class NSCalendar;

#import <Foundation/Foundation.h>

#import "ACHTemplateStore.h"

@interface ACHEarnedInstanceDuplicateUtility : NSObject

@property (retain, nonatomic) NSCalendar *gregorianCalendar; // ivar: _gregorianCalendar
@property (weak, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore


-(id)earnedInstancesLimitedByEarnLimit:(id)arg0 ;
-(id)earnedInstancesWithoutDuplicates:(id)arg0 ;
-(id)initWithTemplateStore:(id)arg0 ;


@end


#endif