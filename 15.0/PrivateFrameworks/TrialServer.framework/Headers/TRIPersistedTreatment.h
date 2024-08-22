// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPERSISTEDTREATMENT_H
#define TRIPERSISTEDTREATMENT_H

@class TRIPBMessage, TRIClientTreatment;



@interface TRIPersistedTreatment : TRIPBMessage

@property (nonatomic) BOOL hasTreatment;
@property (retain, nonatomic) TRIClientTreatment *treatment;


+(id)descriptor;


@end


#endif