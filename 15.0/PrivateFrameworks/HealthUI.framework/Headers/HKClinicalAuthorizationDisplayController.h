// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLINICALAUTHORIZATIONDISPLAYCONTROLLER_H
#define HKCLINICALAUTHORIZATIONDISPLAYCONTROLLER_H

@class HKSource;

#import <Foundation/Foundation.h>

#import "HKClinicalSourceAuthorizationController.h"

@interface HKClinicalAuthorizationDisplayController : NSObject

@property (readonly, nonatomic) HKClinicalSourceAuthorizationController *authorizationController; // ivar: _authorizationController
@property (readonly, copy, nonatomic) HKSource *source;


-(id)_displayReadAuthorizationDateForMode:(NSInteger)arg0 ;
-(id)_displayStringForReadAuthorizationDate:(id)arg0 ;
-(id)committedTitleForReadAuthorizationModeFooterWithSelectedMode:(NSInteger)arg0 formatBlock:(id)arg1 ;
-(id)currentTimeDisplayStringForReadAuthorizationFooter;
-(id)currentTimeTitleForReadAuthorizationModeFooterWithSelectedMode:(NSInteger)arg0 formatBlock:(id)arg1 ;
-(id)init;
-(id)initWithAuthorizationController:(id)arg0 ;


@end


#endif