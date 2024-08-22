// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOETAUPDATEABLEWILLSENDREPLY_H
#define GEOETAUPDATEABLEWILLSENDREPLY_H

@class NSString;
@protocol GEOXPCReply;


#import "GEOXPCReply.h"
#import "GEOETATrafficUpdateRequest.h"

@interface GEOETAUpdateableWillSendReply : GEOXPCReply <GEOXPCReply>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) GEOETATrafficUpdateRequest *updatedRequest; // ivar: _updatedRequest


-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif