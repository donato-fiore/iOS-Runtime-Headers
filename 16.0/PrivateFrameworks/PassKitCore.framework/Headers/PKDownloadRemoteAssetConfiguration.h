// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDOWNLOADREMOTEASSETCONFIGURATION_H
#define PKDOWNLOADREMOTEASSETCONFIGURATION_H

@class NSArray, NSString;
@protocol NSCopying, PKCloudStoreCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface PKDownloadRemoteAssetConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) NSObject<PKCloudStoreCoordinatorDelegate> *cloudStoreCoordinatorDelegate; // ivar: _cloudStoreCoordinatorDelegate
@property (nonatomic) BOOL ignoreRequiredAssetDownloadFailures; // ivar: _ignoreRequiredAssetDownloadFailures
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (retain, nonatomic) NSArray *seids; // ivar: _seids
@property (retain, nonatomic) NSString *suffix; // ivar: _suffix


+(id)configurationWithCloudStoreDelegate:(id)arg0 ;
+(id)configurationWithCloudStoreDelegate:(id)arg0 seids:(id)arg1 ;
+(id)configurationWithSEIDs:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDownloadRemoteAssetConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif