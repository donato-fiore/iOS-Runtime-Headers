// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKATOMPROXY_H
#define CKATOMPROXY_H

@protocol CKXReadStructProxy;


#import "CKXStructProxyBase.h"

@interface CKAtomProxy : CKXStructProxyBase <CKXReadStructProxy>





-(NSUInteger)atomType;
-(NSUInteger)version;
-(id)location;
-(id)references;
-(id)timestamp;
-(id)value;
-(unsigned char)atomBehavior;
-(void)copyValueBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 ;


@end


#endif