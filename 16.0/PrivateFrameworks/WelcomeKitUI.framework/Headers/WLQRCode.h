// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLQRCODE_H
#define WLQRCODE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLQRCode : NSObject

@property (copy, nonatomic) NSString *code; // ivar: _code
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *url; // ivar: _url


-(id)createQRCodeImage:(CGFloat)arg0 ;
-(id)initWithName:(id)arg0 title:(id)arg1 URL:(id)arg2 code:(id)arg3 ;


@end


#endif