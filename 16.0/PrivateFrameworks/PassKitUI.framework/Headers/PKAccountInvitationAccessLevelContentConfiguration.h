// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTINVITATIONACCESSLEVELCONTENTCONFIGURATION_H
#define PKACCOUNTINVITATIONACCESSLEVELCONTENTCONFIGURATION_H

@class NSString, UIImage;
@protocol UIContentConfiguration;

#import <Foundation/Foundation.h>


@interface PKAccountInvitationAccessLevelContentConfiguration : NSObject <UIContentConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSString *secondarySubtitle; // ivar: _secondarySubtitle
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountInvitationAccessLevelContentConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessLevelOption:(id)arg0 ;
-(id)makeContentView;
-(id)updatedConfigurationForState:(id)arg0 ;


@end


#endif