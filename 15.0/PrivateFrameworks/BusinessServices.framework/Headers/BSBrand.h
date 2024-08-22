// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSBRAND_H
#define BSBRAND_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BSBrandMessagingDetails.h"
#import "BSBrandObjcShim.h"

@interface BSBrand : NSObject {
    BSBrandMessagingDetails *_messagingDetails;
}


@property (readonly, nonatomic) NSString *brandURI;
@property (readonly, nonatomic) BOOL isAppleMainBrand;
@property (readonly, nonatomic) BOOL isAppleMakoBrand;
@property (readonly, nonatomic) BSBrandMessagingDetails *messagingDetails;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=_primaryBrandColorHexString) NSString *primaryBrandColorHexString;
@property (readonly, nonatomic) NSString *primaryPhoneNumber;
@property (readonly, nonatomic, getter=_secondaryBrandColorHexString) NSString *secondaryBrandColorHexString;
@property (readonly, nonatomic) BSBrandObjcShim *shim; // ivar: _shim
@property (readonly, nonatomic, getter=isVerified) BOOL verified;


+(id)placeholderName;
-(id)_initWithShim:(id)arg0 ;
-(void)squareLogoDataForDesiredSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)wideLogoDataForDesiredSize:(struct CGSize )arg0 completion:(id)arg1 ;


@end


#endif