// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LKCGIMAGECODINGPROXY_H
#define LKCGIMAGECODINGPROXY_H



#import "CACodingProxy.h"

@interface LKCGImageCodingProxy : CACodingProxy {
    *CGImage _image;
}




+(BOOL)supportsSecureCoding;
-(id)decodedObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif