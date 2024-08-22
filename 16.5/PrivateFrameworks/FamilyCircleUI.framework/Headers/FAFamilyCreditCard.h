// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYCREDITCARD_H
#define FAFAMILYCREDITCARD_H

@class NSString, UIImage, NSURL;

#import <Foundation/Foundation.h>


@interface FAFamilyCreditCard : NSObject

@property (copy, nonatomic) NSString *details; // ivar: _details
@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (copy, nonatomic) NSString *providerDescription; // ivar: _providerDescription
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSString *usageNotice; // ivar: _usageNotice




@end


#endif