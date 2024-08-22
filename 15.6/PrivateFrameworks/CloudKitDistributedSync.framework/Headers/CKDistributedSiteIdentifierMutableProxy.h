// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDISTRIBUTEDSITEIDENTIFIERMUTABLEPROXY_H
#define CKDISTRIBUTEDSITEIDENTIFIERMUTABLEPROXY_H

@protocol CKXWriteStructProxy;


#import "CKXStructMutableProxyBase.h"

@interface CKDistributedSiteIdentifierMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>





-(void)copyFromReadProxy:(id)arg0 ;
-(void)copyFromSiteIdentifier:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setIdentifierBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)setModifier:(id)arg0 ;
-(void)setModifierBytes:(*void)arg0 length:(NSUInteger)arg1 ;


@end


#endif