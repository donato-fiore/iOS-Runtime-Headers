// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKCGCOLORCODINGPROXY_H
#define LKCGCOLORCODINGPROXY_H



#import "CACodingProxy.h"

@interface LKCGColorCodingProxy : CACodingProxy {
    *CGColor _color;
}




+(BOOL)supportsSecureCoding;
-(id)decodedObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif