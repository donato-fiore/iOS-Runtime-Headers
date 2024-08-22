// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IFCACHEIMAGE_H
#define IFCACHEIMAGE_H

@class NSUUID, NSData;
@protocol NSSecureCoding;


#import "IFConcreteImage.h"

@interface IFCacheImage : IFConcreteImage <NSSecureCoding>



@property (readonly) NSUUID *uuid; // ivar: _uuid
@property (readonly) NSData *validationToken; // ivar: _validationToken


+(BOOL)supportsSecureCoding;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 minimumSize:(struct CGSize )arg2 placeholder:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 uuid:(id)arg1 validationToken:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif