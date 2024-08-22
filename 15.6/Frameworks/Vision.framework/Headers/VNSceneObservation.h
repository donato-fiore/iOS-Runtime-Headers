// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNSCENEOBSERVATION_H
#define VNSCENEOBSERVATION_H

@class NSString, NSArray;


#import "VNFeaturePrintObservation.h"

@interface VNSceneObservation : VNFeaturePrintObservation

@property (readonly, copy, nonatomic) NSString *sceneprintVersion; // ivar: _sceneprintVersion
@property (readonly, nonatomic) NSArray *sceneprints; // ivar: _sceneprints


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(id)observationWithSceneprints:(id)arg0 ;
+(id)sceneprintCurrentVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)elementCount;
-(NSUInteger)elementType;
-(NSUInteger)hash;
-(id)data;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 sceneprints:(id)arg1 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 sceneprints:(id)arg1 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif