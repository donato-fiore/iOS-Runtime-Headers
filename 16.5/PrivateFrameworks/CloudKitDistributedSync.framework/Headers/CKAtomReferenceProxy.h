// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKATOMREFERENCEPROXY_H
#define CKATOMREFERENCEPROXY_H

@protocol CKXReadStructProxy;


#import "CKXStructProxyBase.h"

@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>



@property (readonly, nonatomic) NSUInteger size;


-(id)location;
-(id)reference;
-(id)timestamp;
-(unsigned char)type;


@end


#endif