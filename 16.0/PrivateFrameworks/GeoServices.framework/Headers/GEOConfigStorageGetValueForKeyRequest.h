// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCONFIGSTORAGEGETVALUEFORKEYREQUEST_H
#define GEOCONFIGSTORAGEGETVALUEFORKEYREQUEST_H

@class NSString;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"

@interface GEOConfigStorageGetValueForKeyRequest : GEOXPCRequest <GEOXPCRequest>



@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger keyOptions; // ivar: _keyOptions
@property (retain, nonatomic) NSString *keyString; // ivar: _keyString
@property (readonly) Class superclass;


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif