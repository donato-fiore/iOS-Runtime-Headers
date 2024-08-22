// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COSE_MAC0_H
#define COSE_MAC0_H

@class NSData;


#import "COSE.h"

@interface COSE_Mac0 : COSE

@property (readonly, nonatomic) NSData *mac; // ivar: _mac


-(id)description;
-(id)generateMessageForMACWithApplicationProtectedAttributes:(id)arg0 ;
-(id)initWithCBOR:(id)arg0 ;
-(id)initWithProtectedHeaders:(id)arg0 unprotectedHeaders:(id)arg1 payload:(id)arg2 tag:(id)arg3 ;


@end


#endif