// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWCLASSIFICATION_H
#define FLOWCLASSIFICATION_H


#import <Foundation/Foundation.h>

#import "FlowClassification.h"

@interface FlowClassification : NSObject {
    NSUInteger _condensedValues;
}


@property (nonatomic) BOOL automatedExpiration; // ivar: _automatedExpiration
@property (nonatomic) unsigned int burstiness; // ivar: _burstiness
@property (nonatomic) unsigned int disposition; // ivar: _disposition
@property (readonly, nonatomic) unsigned int duration;
@property (nonatomic) CGFloat expirationTime; // ivar: _expirationTime
@property (nonatomic) unsigned int jitter; // ivar: _jitter
@property (nonatomic) unsigned int latency; // ivar: _latency
@property (nonatomic) unsigned int lossTolerance; // ivar: _lossTolerance
@property (retain, nonatomic) FlowClassification *nextClassification; // ivar: _nextClassification
@property (nonatomic) unsigned int preferredBandwidth; // ivar: _preferredBandwidth
@property (nonatomic) unsigned int requiredBandwidth; // ivar: _requiredBandwidth
@property (nonatomic) unsigned int size; // ivar: _size


+(id)classFlagsToString:(unsigned int)arg0 ;
+(id)classificationWithDictionary:(id)arg0 ;
+(id)defaultInstance;
+(id)propertyFlagsToString:(unsigned int)arg0 ;
+(id)undefinedInstance;
+(unsigned int)desiredBandwidthsizeFromDigest:(struct FlowClassificationDigest *)arg0 ;
+(unsigned int)dispositionFromDigest:(struct FlowClassificationDigest *)arg0 ;
+(unsigned int)jitterFromDigest:(struct FlowClassificationDigest *)arg0 ;
+(unsigned int)latencyFromDigest:(struct FlowClassificationDigest *)arg0 ;
+(unsigned int)lossToleranceFromDigest:(struct FlowClassificationDigest *)arg0 ;
+(unsigned int)requiredBandwidthsizeFromDigest:(struct FlowClassificationDigest *)arg0 ;
-(BOOL)configure:(id)arg0 ;
-(BOOL)setOnExpiry:(id)arg0 ;
-(id)description;
-(id)dictionaryForm;


@end


#endif