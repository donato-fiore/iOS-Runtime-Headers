// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCONFIGSETALLVALUEINSTOREREQUEST_H
#define GEOCONFIGSETALLVALUEINSTOREREQUEST_H

@class NSString, NSDictionary;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"

@interface GEOConfigSetAllValueInStoreRequest : GEOXPCRequest <GEOXPCRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger keyOptions; // ivar: _keyOptions
@property (retain, nonatomic) NSDictionary *keyStringsAndValues; // ivar: _keyStringsAndValues
@property (readonly) Class superclass;


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif