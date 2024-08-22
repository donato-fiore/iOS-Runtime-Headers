// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIIMAGESERIALIZATIONWRAPPER_H
#define _UIIMAGESERIALIZATIONWRAPPER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIImageSerializationWrapper : NSObject <NSSecureCoding>

 {
    UIImage *_image;
}




+(BOOL)supportsSecureCoding;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif