// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETDOWNLOADCONFIGURATION_H
#define AVASSETDOWNLOADCONFIGURATION_H

@class NSString, NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AVURLAsset.h"
#import "AVAssetDownloadContentConfiguration.h"

@interface AVAssetDownloadConfiguration : NSObject <NSSecureCoding>

 {
    AVURLAsset *_asset;
    NSString *_title;
    BOOL optimizesAuxiliaryContentConfigurations;
}


@property (copy, nonatomic) NSData *artworkData; // ivar: _artworkData
@property (copy, nonatomic) NSArray *auxiliaryContentConfigurations; // ivar: _auxiliaryContentConfigurations
@property (nonatomic) BOOL optimizesAuxiliaryContentConfigurations; // ivar: _optimizesAuxiliaryContentConfigurations
@property (readonly, nonatomic) AVAssetDownloadContentConfiguration *primaryContentConfiguration; // ivar: _primaryContentConfiguration


+(BOOL)supportsSecureCoding;
+(id)downloadConfigurationWithAsset:(id)arg0 title:(id)arg1 ;
-(id)_asset;
-(id)_serializableRepresentation;
-(id)initWithAsset:(id)arg0 title:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif