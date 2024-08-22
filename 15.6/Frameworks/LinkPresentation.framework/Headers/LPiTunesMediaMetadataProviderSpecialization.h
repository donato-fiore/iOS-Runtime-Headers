// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPITUNESMEDIAMETADATAPROVIDERSPECIALIZATION_H
#define LPITUNESMEDIAMETADATAPROVIDERSPECIALIZATION_H

@class NSString, MPStoreLyricsSnippetURLComponents;
@protocol LPiTunesMediaUnresolvedMetadata;


#import "LPMetadataProviderSpecialization.h"
#import "LPiTunesMediaLookupTask.h"
#import "LPSpecializationMetadata.h"
#import "LPFetcherGroup.h"

@interface LPiTunesMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    NSString *_identifier;
    NSString *_storefrontCountryCode;
    BOOL _canceled;
    LPiTunesMediaLookupTask *_lookupTask;
    LPSpecializationMetadata *_resolvedMetadata;
    id<LPiTunesMediaUnresolvedMetadata> *_unresolvedMetadata;
    MPStoreLyricsSnippetURLComponents *_lyricComponents;
    LPFetcherGroup *_fetcherGroup;
}




+(NSInteger)determineOrientationOfScreenshotsInArray:(id)arg0 ;
+(NSUInteger)specialization;
+(id)assetArrayFromScreenshotArray:(id)arg0 ;
+(id)assetArrayFromScreenshotDictionary:(id)arg0 usingPreferredPlatformArray:(id)arg1 ;
+(id)assetArrayScreenshotArray:(id)arg0 ;
+(id)assetFromVideoPreviewDictionary:(id)arg0 usingPreferredPlatformArray:(id)arg1 ;
+(id)extractOffers:(id)arg0 ;
+(id)specializedMetadataProviderForMetadata:(id)arg0 withContext:(id)arg1 ;
+(id)specializedMetadataProviderForURLWithContext:(id)arg0 ;
+(void)requestSourceApplicationMetadataForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 storefrontCountryCode:(id)arg1 withContext:(id)arg2 ;
-(id)initWithLyricComponents:(id)arg0 withContext:(id)arg1 ;
-(id)processResponseDictionary:(id)arg0 withStorefrontIdentifier:(id)arg1 ;
-(id)schema;
-(void)cancel;
-(void)completed;
-(void)done;
-(void)fail;
-(void)resolve;
-(void)start;


@end


#endif