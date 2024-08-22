// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIQRCODEFEATURE_H
#define CIQRCODEFEATURE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "CIFeature.h"
#import "CIQRCodeDescriptor.h"

@interface CIQRCodeFeature : CIFeature <NSSecureCoding, NSCopying>



@property (readonly) CGPoint bottomLeft; // ivar: bottomLeft
@property (readonly) CGPoint bottomRight; // ivar: bottomRight
@property (readonly) CGRect bounds; // ivar: bounds
@property (readonly) NSString *messageString;
@property (readonly) CIQRCodeDescriptor *symbolDescriptor; // ivar: symbolDescriptor
@property (readonly) CGPoint topLeft; // ivar: topLeft
@property (readonly) CGPoint topRight; // ivar: topRight


+(BOOL)supportsSecureCoding;
+(id)featureWithInternalRepresentation:(struct ? *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(struct ? *)arg0 ;
-(id)type;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif