// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LKNSDICTIONARYCODINGPROXY_H
#define LKNSDICTIONARYCODINGPROXY_H

@class NSDictionary;


#import "CACodingProxy.h"

@interface LKNSDictionaryCodingProxy : CACodingProxy {
    NSDictionary *_dict;
}




+(BOOL)supportsSecureCoding;
-(id)decodedObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif