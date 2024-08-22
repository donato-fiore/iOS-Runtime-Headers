// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMCATIMANIFEST_H
#define CDMCATIMANIFEST_H

@class NSString, NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface CDMCATIManifest : NSObject

@property (retain) NSString *GUID; // ivar: _GUID
@property float confidenceScoreThreshold; // ivar: _confidenceScoreThreshold
@property (retain) NSString *date; // ivar: _date
@property (retain) NSString *locale; // ivar: _locale
@property (retain) NSDictionary *manifest; // ivar: _manifest
@property BOOL manifestValid; // ivar: _manifestValid
@property (retain) NSSet *negativeOverrides; // ivar: _negativeOverrides
@property (retain) NSSet *positiveOverrides; // ivar: _positiveOverrides
@property (retain) NSString *usoCATIdEdge; // ivar: _usoCATIdEdge
@property (retain) NSString *usoEntity; // ivar: _usoEntity
@property (retain) NSString *usoVerb; // ivar: _usoVerb
@property (retain) NSString *version; // ivar: _version
@property (retain) NSSet *weights; // ivar: _weights


-(BOOL)intentIsInvocationModel:(id)arg0 ;
-(float)getThresholdValue:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(void)extractWeightsAndOverridesFromManifest:(id)arg0 ;
-(void)getWeightsAndOverridesAtIntentKeyFromManifest:(id)arg0 ;
-(void)getWeightsAndOverridesWithLegacyKeysFromManifest:(id)arg0 ;
-(void)readCatiManifest:(id)arg0 ;


@end


#endif