// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACACTIVITYPRESENTATIONOPTIONS_H
#define ACACTIVITYPRESENTATIONOPTIONS_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ACActivityPresentationOptions : NSObject <NSCopying>



@property (nonatomic) NSInteger authorizationOptionsType; // ivar: _authorizationOptionsType
@property (retain, nonatomic) NSArray *destinations; // ivar: _destinations
@property (nonatomic) BOOL showsAuthorizationOptions; // ivar: _showsAuthorizationOptions
@property (nonatomic, getter=isUserDismissalAllowedOnLockScreen) BOOL userDismissalAllowedOnLockScreen; // ivar: _isUserDismissalAllowedOnLockScreen


-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromSwift:(BOOL)arg0 ;
-(id)initWithDestinations:(id)arg0 ;


@end


#endif