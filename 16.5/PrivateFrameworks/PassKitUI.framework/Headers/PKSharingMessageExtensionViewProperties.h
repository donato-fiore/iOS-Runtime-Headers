// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHARINGMESSAGEEXTENSIONVIEWPROPERTIES_H
#define PKSHARINGMESSAGEEXTENSIONVIEWPROPERTIES_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface PKSharingMessageExtensionViewProperties : NSObject

@property (retain, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (retain, nonatomic) UIImage *cardImage; // ivar: _cardImage
@property (retain, nonatomic) NSString *fallbackCardImageName; // ivar: _fallbackCardImageName
@property (retain, nonatomic) NSString *leftTitleText; // ivar: _leftTitleText
@property (retain, nonatomic) NSString *rightTitleText; // ivar: _rightTitleText
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSharingMessageExtensionViewProperties:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif