// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUISIMPLEREPLICAPORTALSOURCE_H
#define PBUISIMPLEREPLICAPORTALSOURCE_H

@class NSString, _UILegibilitySettings, UIView;
@protocol PBUIReplicaPortalSource;

#import <Foundation/Foundation.h>


@interface PBUISimpleReplicaPortalSource : NSObject <PBUIReplicaPortalSource>



@property (copy, nonatomic) NSString *cacheIdentifier; // ivar: _cacheIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL effectsAreBakedIn; // ivar: _effectsAreBakedIn
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *targetView; // ivar: _targetView


-(id)initWithTargetView:(id)arg0 cacheIdentifier:(id)arg1 legibilitySettings:(id)arg2 effectsAreBakedIn:(BOOL)arg3 ;


@end


#endif