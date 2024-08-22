// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKATOMLOCATIONPROXY_H
#define CKATOMLOCATIONPROXY_H

@protocol CKXReadStructProxy;


#import "CKXStructProxyBase.h"

@interface CKAtomLocationProxy : CKXStructProxyBase <CKXReadStructProxy>





-(id)identifier;
-(id)location;
-(id)objectCopy;
-(id)zoneName;
-(id)zoneOwnerName;
-(void)copyIdentifierBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 ;
-(void)copyZoneNameBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 ;
-(void)copyZoneOwnerNameBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 ;


@end


#endif