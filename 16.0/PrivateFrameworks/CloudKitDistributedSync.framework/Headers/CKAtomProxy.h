// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKATOMPROXY_H
#define CKATOMPROXY_H

@protocol CKXReadStructProxy;


#import "CKXStructProxyBase.h"

@interface CKAtomProxy : CKXStructProxyBase <CKXReadStructProxy>



@property (readonly, nonatomic) NSUInteger size;


-(NSUInteger)atomType;
-(NSUInteger)valueSize;
-(NSUInteger)version;
-(id)location;
-(id)references;
-(id)timestamp;
-(id)value;
-(unsigned char)atomBehavior;
-(void)copyValueBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 ;


@end


#endif