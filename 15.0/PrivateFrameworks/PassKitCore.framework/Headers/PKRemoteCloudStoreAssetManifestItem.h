// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKREMOTECLOUDSTOREASSETMANIFESTITEM_H
#define PKREMOTECLOUDSTOREASSETMANIFESTITEM_H

@class NSString;
@protocol NSSecureCoding;


#import "PKRemoteAssetManifestItem.h"

@interface PKRemoteCloudStoreAssetManifestItem : PKRemoteAssetManifestItem <NSSecureCoding>



@property (readonly, nonatomic) NSString *recordName;


+(BOOL)supportsSecureCoding;
-(NSUInteger)itemType;
-(void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg0 completion:(id)arg1 ;
-(void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg0 tryCount:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif