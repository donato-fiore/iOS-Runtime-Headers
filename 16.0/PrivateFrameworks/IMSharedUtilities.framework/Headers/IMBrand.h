// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMBRAND_H
#define IMBRAND_H

@class BSBrand, NSString;

#import <Foundation/Foundation.h>


@interface IMBrand : NSObject

@property (readonly, retain, nonatomic) BSBrand *brand; // ivar: _brand
@property (readonly, nonatomic) NSString *brandURI;
@property (readonly, nonatomic) NSString *localizedResponseTime;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *primaryPhoneNumber;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;


+(id)brandWithBSBrand:(id)arg0 ;
+(id)placeholderName;
-(id)_init;
-(void)dealloc;
-(void)squareLogoDataForDesiredSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)wideLogoDataForDesiredSize:(struct CGSize )arg0 completion:(id)arg1 ;


@end


#endif