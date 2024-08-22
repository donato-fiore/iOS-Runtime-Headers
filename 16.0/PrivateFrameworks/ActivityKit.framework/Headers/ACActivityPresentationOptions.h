// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACACTIVITYPRESENTATIONOPTIONS_H
#define ACACTIVITYPRESENTATIONOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ACActivityPresentationOptions : NSObject <NSCopying>



@property (nonatomic) BOOL showsAuthorizationOptions; // ivar: _showsAuthorizationOptions
@property (nonatomic, getter=isUserDismissalAllowedOnLockScreen) BOOL userDismissalAllowedOnLockScreen; // ivar: _isUserDismissalAllowedOnLockScreen


-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromSwift:(BOOL)arg0 ;


@end


#endif