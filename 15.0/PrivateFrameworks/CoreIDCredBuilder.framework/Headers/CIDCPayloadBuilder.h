// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDCPAYLOADBUILDER_H
#define CIDCPAYLOADBUILDER_H


#import <Foundation/Foundation.h>

#import "_TtC17CoreIDCredBuilder26CIDCInternalPayloadBuilder.h"

@interface CIDCPayloadBuilder : NSObject

@property (retain, nonatomic) _TtC17CoreIDCredBuilder26CIDCInternalPayloadBuilder *payloadBuilder; // ivar: _payloadBuilder


-(id)initWithDelegate:(id)arg0 ;
-(void)buildPayloadWithDetails:(id)arg0 completion:(id)arg1 ;


@end


#endif