// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PUPOSTEROVERRIDECONFIGURATION_H
#define _PUPOSTEROVERRIDECONFIGURATION_H

@class NSString, NSURL;
@protocol PUPosterOverrideConfiguration;

#import <Foundation/Foundation.h>


@interface _PUPosterOverrideConfiguration : NSObject <PUPosterOverrideConfiguration>



@property (readonly, nonatomic) BOOL applySmartCrop; // ivar: _applySmartCrop
@property (readonly, copy, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (readonly, nonatomic) NSURL *assetURL; // ivar: _assetURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includeBackfillLayers; // ivar: _includeBackfillLayers
@property (readonly, nonatomic) BOOL includeInactiveLayers; // ivar: _includeInactiveLayers
@property (readonly) Class superclass;


-(id)initWithSettings:(id)arg0 assetURL:(id)arg1 assetIdentifier:(id)arg2 ;


@end


#endif