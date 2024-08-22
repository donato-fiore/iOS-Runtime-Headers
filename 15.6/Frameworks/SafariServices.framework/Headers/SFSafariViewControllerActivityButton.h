// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSAFARIVIEWCONTROLLERACTIVITYBUTTON_H
#define SFSAFARIVIEWCONTROLLERACTIVITYBUTTON_H

@class NSString, UIImage;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFSafariViewControllerActivityButton : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL _fieldsAreValid;
@property (readonly, copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly, copy, nonatomic) UIImage *templateImage; // ivar: _templateImage


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemplateImage:(id)arg0 extensionIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif