// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERCONFIGURATIONSTOREARCHIVEMANIFEST_H
#define PBFPOSTERCONFIGURATIONSTOREARCHIVEMANIFEST_H

@class NSDictionary, NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface PBFPosterConfigurationStoreArchiveManifest : NSObject {
    NSDictionary *_dictionaryRepsentation;
}


@property (readonly, nonatomic) NSInteger archiveVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSUUID *configurationUUID;
@property (readonly, nonatomic) NSInteger dataStoreVersion;
@property (readonly, nonatomic) NSString *extensionIdentifier;
@property (readonly, nonatomic) NSUInteger latestConfigurationSupplement;
@property (readonly, nonatomic) NSUInteger latestConfigurationVersion;


+(BOOL)isManifestDictionaryValid:(id)arg0 ;
+(NSInteger)manifestVersion;
+(id)unsupportedVersions;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)initWithConfigurationStoreCoordinator:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif