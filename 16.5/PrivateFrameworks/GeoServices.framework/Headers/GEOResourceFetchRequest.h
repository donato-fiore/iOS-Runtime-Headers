// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORESOURCEFETCHREQUEST_H
#define GEORESOURCEFETCHREQUEST_H

@class NSString, NSArray;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"
#import "GEOResourceManifestConfiguration.h"

@interface GEOResourceFetchRequest : GEOXPCRequest <GEOXPCRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL force; // ivar: _force
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // ivar: _manifestConfiguration
@property (retain, nonatomic) NSArray *resources; // ivar: _resources
@property (readonly) Class superclass;


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif