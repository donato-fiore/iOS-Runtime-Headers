// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPEERPAYMENTQUICKTYPEPARSER_H
#define NPKPEERPAYMENTQUICKTYPEPARSER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface NPKPeerPaymentQuickTypeParser : NSObject

@property (readonly, nonatomic) NSSet *allowedPayloadIDs; // ivar: _allowedPayloadIDs
@property (readonly, nonatomic) NSSet *supportedCurrencyCodes; // ivar: _supportedCurrencyCodes


-(id)initWithSupportedCurrencyCodes:(id)arg0 allowedPayloadIDs:(id)arg1 ;
-(id)parsePayload:(id)arg0 payloadID:(id)arg1 ;
-(id)parsePayload:(id)arg0 payloadID:(id)arg1 maxCount:(NSUInteger)arg2 ;


@end


#endif