// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNSMARTCAMOBSERVATION_H
#define VNSMARTCAMOBSERVATION_H

@class NSString, NSArray;


#import "VNObservation.h"

@interface VNSmartCamObservation : VNObservation

@property (readonly, copy, nonatomic) NSString *smartCamprintVersion; // ivar: _smartCamprintVersion
@property (copy, nonatomic) NSArray *smartCamprints; // ivar: _smartCamprints


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(id)observationWithSmartCamprints:(id)arg0 ;
+(id)smartCamprintCurrentVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 smartCamprints:(id)arg1 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 smartCamprints:(id)arg1 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif