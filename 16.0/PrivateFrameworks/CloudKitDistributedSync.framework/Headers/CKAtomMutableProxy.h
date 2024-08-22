// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKATOMMUTABLEPROXY_H
#define CKATOMMUTABLEPROXY_H

@protocol CKXWriteStructProxy;


#import "CKXStructMutableProxyBase.h"

@interface CKAtomMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>





-(id)location;
-(id)references;
-(id)timestamp;
-(void)copyFromReadProxy:(id)arg0 ;
-(void)setAtomBehavior:(unsigned char)arg0 ;
-(void)setAtomType:(NSUInteger)arg0 ;
-(void)setValue:(id)arg0 ;
-(void)setValueBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)setVersion:(NSUInteger)arg0 ;


@end


#endif