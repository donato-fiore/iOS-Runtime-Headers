// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRHANDSHAKEOPERATION_H
#define TRHANDSHAKEOPERATION_H



#import "TROperation.h"

@interface TRHandshakeOperation : TROperation

@property (nonatomic) NSInteger protocolVersion; // ivar: _protocolVersion


-(void)_handleResponse:(id)arg0 ;
-(void)execute;


@end


#endif