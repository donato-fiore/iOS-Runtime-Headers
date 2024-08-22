// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMERGEABLEVALUEIDMUTABLEPROXY_H
#define CKMERGEABLEVALUEIDMUTABLEPROXY_H

@protocol CKXWriteStructProxy;


#import "CKXStructMutableProxyBase.h"

@interface CKMergeableValueIDMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>





-(void)copyFromMergeableValueID:(id)arg0 ;
-(void)copyFromReadProxy:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setIdentifierBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)setZoneName:(id)arg0 ;
-(void)setZoneNameBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)setZoneOwnerName:(id)arg0 ;
-(void)setZoneOwnerNameBytes:(*void)arg0 length:(NSUInteger)arg1 ;


@end


#endif