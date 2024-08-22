// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSSCOREDMERCURYID_H
#define HKMEDICATIONSSCOREDMERCURYID_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HKMedicationsScoredMercuryId : NSObject

@property (retain, nonatomic) NSNumber *mercuryId; // ivar: _mercuryId
@property (retain, nonatomic) NSNumber *score; // ivar: _score


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithMercuryId:(id)arg0 score:(id)arg1 ;


@end


#endif