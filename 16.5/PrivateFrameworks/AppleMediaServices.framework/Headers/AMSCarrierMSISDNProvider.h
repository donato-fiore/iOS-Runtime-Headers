// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSCARRIERMSISDNPROVIDER_H
#define AMSCARRIERMSISDNPROVIDER_H

@class NSString;
@protocol AMSCarrierMSISDNProviding;

#import <Foundation/Foundation.h>


@interface AMSCarrierMSISDNProvider : NSObject <AMSCarrierMSISDNProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *msisdn;
@property (readonly) Class superclass;




@end


#endif