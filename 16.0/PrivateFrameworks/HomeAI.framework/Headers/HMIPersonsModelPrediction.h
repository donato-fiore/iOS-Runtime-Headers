// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIPERSONSMODELPREDICTION_H
#define HMIPERSONSMODELPREDICTION_H

@class HMFObject, NSNumber, NSUUID;



@interface HMIPersonsModelPrediction : HMFObject

@property (readonly) NSNumber *confidence; // ivar: _confidence
@property (readonly) NSUUID *linkedEntityUUID; // ivar: _linkedEntityUUID
@property (readonly) NSUUID *personUUID; // ivar: _personUUID
@property (readonly) NSUUID *sourceUUID; // ivar: _sourceUUID


-(id)initWithSourceUUID:(id)arg0 personUUID:(id)arg1 confidence:(id)arg2 linkedEntityUUID:(id)arg3 ;


@end


#endif