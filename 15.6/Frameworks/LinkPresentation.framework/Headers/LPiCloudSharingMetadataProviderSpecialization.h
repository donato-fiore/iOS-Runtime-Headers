// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPICLOUDSHARINGMETADATAPROVIDERSPECIALIZATION_H
#define LPICLOUDSHARINGMETADATAPROVIDERSPECIALIZATION_H

@class NSString, CKContainer;


#import "LPMetadataProviderSpecialization.h"

@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    NSString *_applicationFromURL;
    NSString *_titleFromURL;
    CKContainer *_baseContainer;
    CKContainer *_applicationContainer;
    BOOL _canceled;
}




+(NSUInteger)specialization;
+(id)applicationNameMap;
+(id)extractApplicationFromURL:(id)arg0 ;
+(id)extractTitleFromURL:(id)arg0 ;
+(id)specializedMetadataProviderForURLWithContext:(id)arg0 ;
-(BOOL)canUseCloudKit;
-(id)applicationFromBundleIdentifiers:(id)arg0 containerIdentifier:(id)arg1 ;
-(id)iconFromShare:(id)arg0 ;
-(id)initWithContext:(id)arg0 applicationFromURL:(id)arg1 titleFromURL:(id)arg2 ;
-(void)cancel;
-(void)completeUsingApplication:(id)arg0 title:(id)arg1 ;
-(void)completeWithShareMetadata:(id)arg0 bundleIDs:(id)arg1 ;
-(void)fail;
-(void)start;


@end


#endif