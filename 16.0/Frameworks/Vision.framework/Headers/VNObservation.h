// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNOBSERVATION_H
#define VNOBSERVATION_H

@class NSPointerArray, NSUUID;
@protocol VNEntityIdentificationModelObservation, VNObjectCloning, VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNObservation : NSObject <VNEntityIdentificationModelObservation, VNObjectCloning, VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding>



@property (nonatomic) float confidence; // ivar: _confidence
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier; // ivar: _originatingRequestSpecifier
@property (retain, nonatomic) NSPointerArray *requestImageBuffers; // ivar: _requestImageBuffers
@property (retain, nonatomic) NSPointerArray *requestImageBuffersCacheKeys; // ivar: _requestImageBuffersCacheKeys
@property (readonly, nonatomic) NSUInteger requestRevision;
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property (retain, nonatomic, setter=setUUID:) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(id)defaultOriginatingRequestSpecifierForRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)getDataDetectorResults:(*id)arg0 ;
-(id)getDataDetectorResultsForString:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 ;
-(id)observationWithOriginatingRequestSpecifier:(id)arg0 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif