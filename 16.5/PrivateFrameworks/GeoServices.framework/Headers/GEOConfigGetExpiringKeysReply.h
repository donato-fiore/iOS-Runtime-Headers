// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCONFIGGETEXPIRINGKEYSREPLY_H
#define GEOCONFIGGETEXPIRINGKEYSREPLY_H

@class NSString, NSDictionary;
@protocol GEOXPCReply;


#import "GEOXPCReply.h"

@interface GEOConfigGetExpiringKeysReply : GEOXPCReply <GEOXPCReply>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *expiringKeys; // ivar: _expiringKeys
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif