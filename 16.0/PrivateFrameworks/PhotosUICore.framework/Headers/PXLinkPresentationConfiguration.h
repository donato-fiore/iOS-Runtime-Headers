// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXLINKPRESENTATIONCONFIGURATION_H
#define PXLINKPRESENTATIONCONFIGURATION_H

@class NSDate, PHAsset, UIImage;

#import <Foundation/Foundation.h>


@interface PXLinkPresentationConfiguration : NSObject

@property (copy, nonatomic) NSDate *earliestAssetDate; // ivar: _earliestAssetDate
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (copy, nonatomic) NSDate *latestAssetDate; // ivar: _latestAssetDate
@property (nonatomic) NSUInteger otherItemCount; // ivar: _otherItemCount
@property (nonatomic) NSUInteger photoCount; // ivar: _photoCount
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (nonatomic) NSUInteger videoCount; // ivar: _videoCount


-(id)initWithKeyAsset:(id)arg0 ;


@end


#endif