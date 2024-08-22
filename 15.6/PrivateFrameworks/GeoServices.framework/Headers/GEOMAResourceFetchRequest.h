// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMARESOURCEFETCHREQUEST_H
#define GEOMARESOURCEFETCHREQUEST_H

@class NSString, NSDictionary;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"

@interface GEOMAResourceFetchRequest : GEOXPCRequest <GEOXPCRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *extras; // ivar: _extras
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif