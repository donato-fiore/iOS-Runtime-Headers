// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FXHOST_H
#define FXHOST_H

@protocol FxStreamProviding, FxHostEnvironment;

#import <Foundation/Foundation.h>


@interface FxHost : NSObject <FxStreamProviding, FxHostEnvironment>

 {
    *FxHostPriv _priv;
}




+(id)_createPathArrayFromURLArray:(id)arg0 ;
+(id)_scanFxMetaPlugWrappersWithPlugInManager:(id)arg0 ;
+(id)fxMetaPlugsFolderURLs;
+(id)fxPlugsFolderURLs;
+(id)host;
+(id)internalPlugInsFolderURL;
+(id)plugInsFolderURLs;
-(BOOL)allowBuiltInEffectsForPlugInTypeUUID:(id)arg0 ;
-(BOOL)isContextTypeSupported:(int)arg0 bySample:(id)arg1 ;
-(BOOL)isSamplePredetermined:(id)arg0 ;
-(BOOL)isStreamPremultiplied:(id)arg0 ;
-(BOOL)supportsParameterClass:(Class)arg0 ;
-(CGFloat)durationForStream:(id)arg0 ;
-(CGFloat)frameDurationForStream:(id)arg0 ;
-(CGFloat)globalFrameDuration;
-(CGFloat)pixelAspectForStream:(id)arg0 ;
-(CGFloat)startTimeForStream:(id)arg0 ;
-(NSUInteger)fieldOrderForSample:(id)arg0 ;
-(id)_createDefaultSearchableURLsDict;
-(id)_createDefaultSupportBuiltInsDict;
-(id)_findGroupInList:(id)arg0 withIdenticalDescriptor:(id)arg1 ;
-(id)_fxMetaPlugWrapperForPlugInTypeUUID:(id)arg0 ;
-(id)_fxPlugGroupListForOptionalFlavor:(id)arg0 ;
-(id)defaultSearchableURLsForPlugInTypeUUID:(id)arg0 ;
-(id)defaultSupportedPlugInTypeUUIDs;
-(id)domainOfDefinitionForSample:(id)arg0 ;
-(id)evaluateSample:(id)arg0 withOptions:(id)arg1 ;
-(id)fxPlugDescriptorWithUUID:(id)arg0 ;
-(id)fxPlugGroupList;
-(id)fxPlugGroupListForFlavor:(id)arg0 ;
-(id)hostName;
-(id)init;
-(id)requiredSamplesForSample:(id)arg0 ;
-(id)searchableURLsForPlugInTypeUUID:(id)arg0 ;
-(id)supportedPlugInTypeUUIDs;
-(id)uniqueID;
-(int)majorVersion;
-(int)minorVersion;
-(unsigned int)globalTimeScale;
-(unsigned int)timeScaleForStream:(id)arg0 ;
-(void)dealloc;
-(void)invalidateFxPlugDescriptorArray;
-(void)scanFxPlugsIfNecessary;
-(void)setAllowBuiltInEffects:(BOOL)arg0 forPlugInTypeUUID:(id)arg1 ;
-(void)setSearchableURLs:(id)arg0 forPlugInTypeUUID:(id)arg1 ;
-(void)setSupportedPlugInTypeUUIDs:(id)arg0 ;


@end


#endif