// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNDISPLAYREPRESENTATION_H
#define LNDISPLAYREPRESENTATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNImage.h"
#import "LNStaticDeferredLocalizedString.h"

@interface LNDisplayRepresentation : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) LNImage *image; // ivar: _image
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 image:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif