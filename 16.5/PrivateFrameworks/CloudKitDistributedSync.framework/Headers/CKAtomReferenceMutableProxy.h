// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKATOMREFERENCEMUTABLEPROXY_H
#define CKATOMREFERENCEMUTABLEPROXY_H

@protocol CKXWriteStructProxy;


#import "CKXStructMutableProxyBase.h"

@interface CKAtomReferenceMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>





-(id)location;
-(id)timestamp;
-(void)assignLocationFromProxy:(id)arg0 ;
-(void)assignTimestampFromProxy:(id)arg0 ;
-(void)copyFromReadProxy:(id)arg0 ;
-(void)copyFromReference:(id)arg0 ;
-(void)setType:(unsigned char)arg0 ;


@end


#endif