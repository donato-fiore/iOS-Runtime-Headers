// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDISTRIBUTEDTIMESTAMPMUTABLEPROXY_H
#define CKDISTRIBUTEDTIMESTAMPMUTABLEPROXY_H

@protocol CKXWriteStructProxy;


#import "CKXStructMutableProxyBase.h"

@interface CKDistributedTimestampMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>





-(id)distributedSiteIdentifier;
-(void)copyFromReadProxy:(id)arg0 ;
-(void)copyFromTimestamp:(id)arg0 ;
-(void)setClock:(NSUInteger)arg0 ;
-(void)setModifier:(unsigned char)arg0 ;
-(void)setSiteIdentifier:(id)arg0 ;
-(void)setSiteIdentifierBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)setUnordered:(BOOL)arg0 ;


@end


#endif