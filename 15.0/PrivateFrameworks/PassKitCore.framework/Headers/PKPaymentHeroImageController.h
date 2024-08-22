// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTHEROIMAGECONTROLLER_H
#define PKPAYMENTHEROIMAGECONTROLLER_H

@class NSArray, NSString;
@protocol PKPaymentHeroImageControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentWebService.h"
#import "PKPaymentHeroImageManifest.h"

@interface PKPaymentHeroImageController : NSObject {
    PKPaymentWebService *_webService;
}


@property (weak, nonatomic) NSObject<PKPaymentHeroImageControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *featuredImages; // ivar: _featuredImages
@property (readonly, nonatomic) PKPaymentHeroImageManifest *manifest; // ivar: _manifest
@property (copy, nonatomic) NSString *primaryImageIdentifier; // ivar: _primaryImageIdentifier
@property (nonatomic) NSInteger watchSize; // ivar: _watchSize


+(CGFloat)cardAspectRatio;
+(id)defaultImages;
+(struct CGSize )cardArtSizeForWatchViewSize:(struct CGSize )arg0 ;
-(id)featuredDefaultImages;
-(id)featuredImageIdentifiers;
-(id)filterImages:(id)arg0 ;
-(id)initWithManifest:(id)arg0 webService:(id)arg1 ;
-(struct CGSize )cardArtSizeForSize:(struct CGSize )arg0 ;
-(void)downloadImages:(id)arg0 ;


@end


#endif