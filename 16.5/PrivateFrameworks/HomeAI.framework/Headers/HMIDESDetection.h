// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIDESDETECTION_H
#define HMIDESDETECTION_H

@class HMFObject, NSNumber;



@interface HMIDESDetection : HMFObject

@property (readonly) CGRect boundingBox; // ivar: _boundingBox
@property (readonly) NSNumber *confidence; // ivar: _confidence
@property (readonly) NSNumber *label; // ivar: _label


-(id)initWithDictionary:(id)arg0 regionOfInterest:(struct CGRect )arg1 ;


@end


#endif