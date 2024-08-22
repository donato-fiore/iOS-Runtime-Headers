// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LKNSVALUECODINGPROXY_H
#define LKNSVALUECODINGPROXY_H



#import "CACodingProxy.h"

@interface LKNSValueCodingProxy : CACodingProxy {
    int _kind;
    ? _u;
}




+(BOOL)supportsSecureCoding;
-(id)decodedObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif