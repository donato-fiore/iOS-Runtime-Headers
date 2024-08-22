// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INHANDLEINTENTFORWARDINGACTIONRESPONSE_H
#define INHANDLEINTENTFORWARDINGACTIONRESPONSE_H

@class NSSet, NSData;


#import "INIntentForwardingActionResponse.h"
#import "INIntentResponse.h"

@interface INHandleIntentForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) NSSet *cacheItems; // ivar: _cacheItems
@property (readonly, nonatomic) INIntentResponse *intentResponse; // ivar: _intentResponse
@property (readonly, nonatomic) NSData *launchContextActivityData; // ivar: _launchContextActivityData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntentResponse:(id)arg0 launchContextActivityData:(id)arg1 cacheItems:(id)arg2 error:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif