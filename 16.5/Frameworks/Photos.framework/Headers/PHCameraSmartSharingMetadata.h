// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHCAMERASMARTSHARINGMETADATA_H
#define PHCAMERASMARTSHARINGMETADATA_H

@class NSDate, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHCameraSmartSharingMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSArray *filterContactIDs; // ivar: _filterContactIDs
@property (readonly, nonatomic) NSArray *frequentLocations; // ivar: _frequentLocations
@property (readonly, nonatomic) BOOL hasActiveLibraryScope;
@property (readonly, nonatomic) NSArray *homeLocations; // ivar: _homeLocations
@property (readonly, nonatomic) NSArray *identities; // ivar: _identities
@property (readonly, nonatomic) NSString *libraryScopeLocalIdentifier; // ivar: _libraryScopeLocalIdentifier
@property (readonly, nonatomic) BOOL locationShiftingRequired; // ivar: _locationShiftingRequired


+(BOOL)storeMetadata:(id)arg0 forPhotoLibrary:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)_metadataFileURLForPhotoLibrary:(id)arg0 ;
+(id)_readMetadataFromFileURL:(id)arg0 ;
+(id)retrieveMetadataForPhotoLibrary:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLibraryScopeIdentifier:(id)arg0 filterContactIDs:(id)arg1 homeLocations:(id)arg2 isOnTrip:(BOOL)arg3 ;
-(id)initWithLibraryScopeIdentifier:(id)arg0 identities:(id)arg1 homeLocations:(id)arg2 frequentLocations:(id)arg3 locationShiftingRequired:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif