// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOETAUPDATEABLEWILLSENDREQUEST_H
#define GEOETAUPDATEABLEWILLSENDREQUEST_H

@class NSString;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"

@interface GEOETAUpdateableWillSendRequest : GEOXPCRequest <GEOXPCRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif