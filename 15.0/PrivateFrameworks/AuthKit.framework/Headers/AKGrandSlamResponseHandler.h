// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKGRANDSLAMRESPONSEHANDLER_H
#define AKGRANDSLAMRESPONSEHANDLER_H


#import <Foundation/Foundation.h>

#import "AKAppleIDAuthenticationContext.h"

@interface AKGrandSlamResponseHandler : NSObject

@property (retain, nonatomic) AKAppleIDAuthenticationContext *context; // ivar: _context


-(id)initWithContext:(id)arg0 ;
-(void)_handleInvalidMasterTokenWithSubErrorCode:(NSInteger)arg0 ;
-(void)_revokeDeviceTrust;
-(void)handleResponseError:(id)arg0 ;


@end


#endif