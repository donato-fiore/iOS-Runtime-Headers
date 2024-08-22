// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIPERSONSMODELSSUMMARY_H
#define HMIPERSONSMODELSSUMMARY_H

@class HMFObject, NSSet;



@interface HMIPersonsModelsSummary : HMFObject

@property (readonly) NSUInteger externalToExternalEquivalencies; // ivar: _externalToExternalEquivalencies
@property (readonly) NSUInteger homeToExternalEquivalencies; // ivar: _homeToExternalEquivalencies
@property (readonly) NSSet *modelSummaries; // ivar: _modelSummaries


-(id)initWithModelSummaries:(id)arg0 homeToExternalEquivalencies:(NSUInteger)arg1 externalToExternalEquivalencies:(NSUInteger)arg2 ;


@end


#endif