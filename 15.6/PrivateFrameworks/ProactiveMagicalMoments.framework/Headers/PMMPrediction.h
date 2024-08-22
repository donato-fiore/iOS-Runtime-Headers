// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMMPREDICTION_H
#define PMMPREDICTION_H

@class NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface PMMPrediction : NSObject

@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSArray *predictedItems; // ivar: _predictedItems


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPrediction:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithPredictedItems:(id)arg0 expirationDate:(id)arg1 ;


@end


#endif