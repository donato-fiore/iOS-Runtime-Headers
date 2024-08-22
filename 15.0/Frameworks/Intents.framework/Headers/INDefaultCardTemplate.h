// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INDEFAULTCARDTEMPLATE_H
#define INDEFAULTCARDTEMPLATE_H

@class NSString;
@protocol INImageProxyInjecting, INKeyImageProducing, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INImage.h"

@interface INDefaultCardTemplate : NSObject <INImageProxyInjecting, INKeyImageProducing, NSCopying, NSSecureCoding>



@property (readonly) INImage *_keyImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) INImage *image; // ivar: _image
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif