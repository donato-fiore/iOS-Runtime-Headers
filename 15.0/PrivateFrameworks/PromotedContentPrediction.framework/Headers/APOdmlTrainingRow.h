// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLTRAININGROW_H
#define APODMLTRAININGROW_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface APOdmlTrainingRow : NSObject

@property (readonly, nonatomic) NSArray *appUsageVector; // ivar: _appUsageVector
@property (readonly, nonatomic) NSArray *appVector; // ivar: _appVector
@property (readonly, nonatomic) NSArray *label; // ivar: _label
@property (readonly, nonatomic) NSArray *pTTRLogit; // ivar: _pTTRLogit


-(id)initWithAppUsageVector:(id)arg0 appVector:(id)arg1 pTTRLogit:(id)arg2 label:(id)arg3 ;


@end


#endif