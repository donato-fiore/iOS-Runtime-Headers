// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSBRANDOBJCSHIM_H
#define BSBRANDOBJCSHIM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BSBrandMessagingDetailsObjcShim.h"

@interface BSBrandObjcShim : NSObject {
    ? brand;
}


@property (nonatomic, readonly) NSString *brandURI;
@property (nonatomic, readonly) BOOL isVerified;
@property (nonatomic, readonly) BSBrandMessagingDetailsObjcShim *messagingDetails; // ivar: messagingDetails
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *primaryBrandColorHexString;
@property (nonatomic, readonly) NSString *primaryPhoneNumber;
@property (nonatomic, readonly) NSString *secondaryBrandColorHexString;


-(id)init;
-(void)squareLogoDataForDesiredSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)wideLogoDataForDesiredSize:(struct CGSize )arg0 completion:(id)arg1 ;


@end


#endif