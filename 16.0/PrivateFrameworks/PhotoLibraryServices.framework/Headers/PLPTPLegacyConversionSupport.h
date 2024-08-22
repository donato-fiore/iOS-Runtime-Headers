// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPTPLEGACYCONVERSIONSUPPORT_H
#define PLPTPLEGACYCONVERSIONSUPPORT_H

@class PHMediaFormatConversionManager, PFMediaCapabilities, NSString;
@protocol PLPTPConversionSupport;

#import <Foundation/Foundation.h>


@interface PLPTPLegacyConversionSupport : NSObject <PLPTPConversionSupport>

 {
    PHMediaFormatConversionManager *_mediaFormatConversionManager;
    PFMediaCapabilities *_peerMediaCapabilities;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL peerSupportsAdjustmentBaseResources;
@property (readonly, nonatomic) BOOL peerSupportsTranscodeChoice;
@property (readonly, nonatomic) BOOL penultimateIsPublic;
@property (readonly) Class superclass;


-(id)conversionResultForAsset:(id)arg0 sourceHints:(id)arg1 forceLegacyConversion:(BOOL)arg2 assetTypeLabel:(id)arg3 ;
-(id)init;


@end


#endif