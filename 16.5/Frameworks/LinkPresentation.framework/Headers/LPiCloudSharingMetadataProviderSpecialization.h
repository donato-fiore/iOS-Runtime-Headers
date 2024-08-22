// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPICLOUDSHARINGMETADATAPROVIDERSPECIALIZATION_H
#define LPICLOUDSHARINGMETADATAPROVIDERSPECIALIZATION_H

@class NSString, CKContainer;


#import "LPMetadataProviderSpecialization.h"

@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    NSString *_applicationFromURL;
    NSString *_kindFromURL;
    NSString *_titleFromURL;
    CKContainer *_baseContainer;
    CKContainer *_applicationContainer;
    BOOL _canceled;
}




+(NSUInteger)specialization;
+(id)normalizeKind:(id)arg0 forApplication:(id)arg1 ;
+(id)specializedMetadataProviderForURLWithContext:(id)arg0 ;
-(BOOL)canRetrieveThumbnailForApplication:(id)arg0 ;
-(BOOL)canUseCloudKit;
-(id)applicationFromBundleIdentifiers:(id)arg0 containerIdentifier:(id)arg1 ;
-(id)iconFromShare:(id)arg0 ;
-(id)initWithContext:(id)arg0 applicationFromURL:(id)arg1 kindFromURL:(id)arg2 titleFromURL:(id)arg3 ;
-(void)cancel;
-(void)completeRetrievingThumbnailForShareMetadata:(id)arg0 application:(id)arg1 kind:(id)arg2 title:(id)arg3 ;
-(void)completeUsingApplication:(id)arg0 kind:(id)arg1 title:(id)arg2 thumbnail:(id)arg3 ;
-(void)completeWithShareMetadata:(id)arg0 bundleIDs:(id)arg1 ;
-(void)fail;
-(void)start;


@end


#endif