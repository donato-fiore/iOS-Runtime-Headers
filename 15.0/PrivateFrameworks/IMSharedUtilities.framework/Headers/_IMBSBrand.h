// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IMBSBRAND_H
#define _IMBSBRAND_H



#import "IMBrand.h"

@interface _IMBSBrand : IMBrand



-(BOOL)isVerified;
-(id)_init;
-(id)_initWithBSBrand:(id)arg0 ;
-(id)brandURI;
-(id)localizedResponseTime;
-(id)name;
-(id)primaryPhoneNumber;
-(void)squareLogoDataForDesiredSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)wideLogoDataForDesiredSize:(struct CGSize )arg0 completion:(id)arg1 ;


@end


#endif