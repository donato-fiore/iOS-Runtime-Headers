// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMERGEABLEVALUEIDPROXY_H
#define CKMERGEABLEVALUEIDPROXY_H

@protocol CKXReadStructProxy;


#import "CKXStructProxyBase.h"

@interface CKMergeableValueIDProxy : CKXStructProxyBase <CKXReadStructProxy>





-(id)identifier;
-(id)mergeableValueID;
-(id)zoneName;
-(id)zoneOwnerName;
-(void)copyIdentifierBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 ;
-(void)copyZoneNameBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 ;
-(void)copyZoneOwnerNameBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 ;


@end


#endif