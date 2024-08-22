// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLVIDEOINTERNALRESOURCE_H
#define PLVIDEOINTERNALRESOURCE_H

@class NSString;
@protocol PLVideoResource;

#import <Foundation/Foundation.h>

#import "PLInternalResource.h"

@interface PLVideoInternalResource : NSObject <PLVideoResource>



@property (readonly, nonatomic) PLInternalResource *backingResource; // ivar: _backingResource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deviceSupportsHDR;
-(BOOL)hasAssociatedMediaMetadata;
-(BOOL)isDownloadable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHDRDerivative;
-(BOOL)isHDROrSDRDependingOnMasterVideo;
-(BOOL)isLargeQuality;
-(BOOL)isLocallyAvailable;
-(BOOL)isLocallyGeneratable;
-(BOOL)isOriginalVideo;
-(BOOL)isOriginalVideoComplement;
-(BOOL)isPlayable;
-(BOOL)isSDRFallback;
-(BOOL)isStreamable;
-(BOOL)matchesOrExceedsQualityLevel:(unsigned int)arg0 ;
-(id)additionalDescription;
-(id)fileURLIfLocal;
-(id)initWithBackingResource:(id)arg0 ;
-(id)uniformTypeIdentifier;
-(unsigned int)version;
-(unsigned short)storeClassID;


@end


#endif