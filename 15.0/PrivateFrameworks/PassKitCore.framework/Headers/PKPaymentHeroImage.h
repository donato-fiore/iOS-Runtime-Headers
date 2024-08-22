// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTHEROIMAGE_H
#define PKPAYMENTHEROIMAGE_H

@class NSData, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "PKPaymentHeroImageSet.h"
#import "PKOSVersionRequirementRange.h"

@interface PKPaymentHeroImage : NSObject {
    NSData *_imageData;
    PKPaymentHeroImageSet *_images;
}


@property (readonly, nonatomic) NSInteger cardType; // ivar: _cardType
@property (readonly, nonatomic) NSInteger credentialType; // ivar: _credentialType
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBeta; // ivar: _isBeta
@property (readonly, nonatomic) NSArray *requiredDeviceFeatures; // ivar: _requiredDeviceFeatures
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRequirement; // ivar: _versionRequirement


-(BOOL)hasCachedImageWithScale:(CGFloat)arg0 ;
-(BOOL)isSupportedByDevice:(id)arg0 ;
-(id)URLForImageWithScale:(CGFloat)arg0 ;
-(id)imageFilePathForImageModel:(id)arg0 ;
-(id)imageFilePathOnDiskForPreferredLanguages:(id)arg0 scale:(CGFloat)arg1 ;
-(id)imageForPreferredLanguages:(id)arg0 scale:(CGFloat)arg1 ;
-(id)imageWithScale:(CGFloat)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 imageData:(id)arg1 credentialType:(NSInteger)arg2 ;
-(id)initWithLegacyDictionary:(id)arg0 identifier:(id)arg1 ;
-(void)downloadImageForPreferredLanguages:(id)arg0 scale:(CGFloat)arg1 fileDownloader:(id)arg2 completion:(id)arg3 ;
-(void)downloadImageWithScale:(CGFloat)arg0 fileDownloader:(id)arg1 completion:(id)arg2 ;


@end


#endif