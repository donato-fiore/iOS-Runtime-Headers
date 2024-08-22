// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTINVITATIONACCESSLEVELOPTION_H
#define PKACCOUNTINVITATIONACCESSLEVELOPTION_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface PKAccountInvitationAccessLevelOption : NSObject

@property (readonly, nonatomic) NSUInteger accessLevel; // ivar: _accessLevel
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *secondarySubtitle; // ivar: _secondarySubtitle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithAccessLevel:(NSUInteger)arg0 ;


@end


#endif