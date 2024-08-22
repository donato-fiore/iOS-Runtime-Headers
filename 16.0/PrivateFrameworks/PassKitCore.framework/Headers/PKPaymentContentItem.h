// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTCONTENTITEM_H
#define PKPAYMENTCONTENTITEM_H

@class NSURLRequest, NSAttributedString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentContentItem : NSObject <NSSecureCoding>



@property (nonatomic, getter=isCentered) BOOL centered; // ivar: _centered
@property (nonatomic) *CGImage image; // ivar: _image
@property (copy, nonatomic) NSURLRequest *imageRequest; // ivar: _imageRequest
@property (copy, nonatomic) NSAttributedString *label; // ivar: _label
@property (copy, nonatomic) NSAttributedString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)itemWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentContentItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)protobuf;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif