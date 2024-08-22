// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAINHERITANCECONTACTCONTROLLER_H
#define AAINHERITANCECONTACTCONTROLLER_H

@class CIImage, NSString;
@protocol AAInheritanceContactInfo;

#import <Foundation/Foundation.h>

#import "AAInheritanceController.h"

@interface AAInheritanceContactController : NSObject {
    NSInteger _contactType;
    AAInheritanceController *_inheritanceController;
    id<AAInheritanceContactInfo> *_contactInfo;
    CIImage *_accessKeyQRCodeImage;
}


@property (readonly, nonatomic) NSString *accessKeyString;
@property (readonly, nonatomic) NSString *claimTokenString;


-(id)_accessKeyQRCodeImage;
-(id)accessKeyQRCodeImageDataWithSize:(CGFloat)arg0 ;
-(id)initWithContactInfo:(id)arg0 contactType:(NSInteger)arg1 ;
-(void)removeContactAsBenefactorWithCompletion:(id)arg0 ;
-(void)removeContactAsBeneficiaryWithCompletion:(id)arg0 ;
-(void)sendInvitationWithCompletion:(id)arg0 ;


@end


#endif