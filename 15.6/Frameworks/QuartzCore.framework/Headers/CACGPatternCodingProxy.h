// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACGPATTERNCODINGPROXY_H
#define CACGPATTERNCODINGPROXY_H



#import "CACodingProxy.h"

@interface CACGPatternCodingProxy : CACodingProxy {
    *CGPattern _pattern;
}




+(BOOL)supportsSecureCoding;
-(id)decodedObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif