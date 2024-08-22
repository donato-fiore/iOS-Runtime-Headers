// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKSMARTCARDWITHERROR_H
#define TKSMARTCARDWITHERROR_H

@class NSError;


#import "TKSmartCard.h"

@interface TKSmartCardWithError : TKSmartCard {
    TKSmartCard *_parentCard;
    NSError *_error;
}




-(id)initWithCard:(id)arg0 error:(id)arg1 ;
-(void)beginSessionWithReply:(id)arg0 ;
-(void)sendIns:(unsigned char)arg0 p1:(unsigned char)arg1 p2:(unsigned char)arg2 data:(id)arg3 le:(id)arg4 reply:(id)arg5 ;
-(void)transmitRequest:(id)arg0 reply:(id)arg1 ;


@end


#endif