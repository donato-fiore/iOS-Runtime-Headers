// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSLOGOIMAGESET_H
#define PKPASSLOGOIMAGESET_H



#import "PKPassImageSet.h"
#import "PKImage.h"

@interface PKPassLogoImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) PKImage *bankLogoImage; // ivar: _bankLogoImage
@property (retain, nonatomic) PKImage *cardBackgroundCombinedImage; // ivar: _cardBackgroundCombinedImage
@property (retain, nonatomic) PKImage *cardBackgroundImage; // ivar: _cardBackgroundImage
@property (retain, nonatomic) PKImage *cobrandLogoImage; // ivar: _cobrandLogoImage
@property (retain, nonatomic) PKImage *compactBankLogoDarkImage; // ivar: _compactBankLogoDarkImage
@property (retain, nonatomic) PKImage *compactBankLogoLightImage; // ivar: _compactBankLogoLightImage
@property (retain, nonatomic) PKImage *footerImage; // ivar: _footerImage
@property (retain, nonatomic) PKImage *logoImage; // ivar: _logoImage
@property (retain, nonatomic) PKImage *networkLogoImage; // ivar: _networkLogoImage
@property (retain, nonatomic) PKImage *stripImage; // ivar: _stripImage
@property (retain, nonatomic) PKImage *thumbnailImage; // ivar: _thumbnailImage


+(BOOL)shouldCache;
+(BOOL)supportsSecureCoding;
+(NSInteger)imageSetType;
+(id)archiveName;
+(unsigned int)currentVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayProfile:(id)arg0 fileURL:(id)arg1 screenScale:(CGFloat)arg2 suffix:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preheatImages;


@end


#endif