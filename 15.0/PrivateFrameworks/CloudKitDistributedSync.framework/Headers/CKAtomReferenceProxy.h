// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKATOMREFERENCEPROXY_H
#define CKATOMREFERENCEPROXY_H

@protocol CKXReadStructProxy;


#import "CKXStructProxyBase.h"

@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>





-(id)location;
-(id)objectCopy;
-(id)reference;
-(id)timestamp;
-(unsigned char)type;


@end


#endif