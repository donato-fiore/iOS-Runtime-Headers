// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVMLIMAGEPRINTOBSERVATION_LEGACYSUPPORTDONOTCHANGE_H
#define CVMLIMAGEPRINTOBSERVATION_LEGACYSUPPORTDONOTCHANGE_H

@class LegacySupportDoNotChange, NSUUID, NSString;


#import "MPImageDescriptor_LegacySupportDoNotChange.h"

@interface CVMLImageprintObservation_LegacySupportDoNotChange : LegacySupportDoNotChange {
    NSUUID *_identifier;
    MPImageDescriptor_LegacySupportDoNotChange *_imageprintDescriptor;
    NSString *_imageprintType;
    NSString *_imageprintVersion;
}




+(BOOL)supportsSecureCoding;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)serializedLength;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)serializeAsVNImageprintStateAndReturnError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif