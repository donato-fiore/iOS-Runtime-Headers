// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSSERVERPOSTERPATH_H
#define PRSSERVERPOSTERPATH_H

@class NSURL, NSString;


#import "PRSPosterPath.h"
#import "PRSServerPosterIdentity.h"

@interface PRSServerPosterPath : PRSPosterPath

@property (readonly, copy, nonatomic) NSURL *identifierURL;
@property (readonly, copy, nonatomic) PRSServerPosterIdentity *identity;
@property (readonly, copy, nonatomic) NSString *identityPathComponent;
@property (readonly, copy, nonatomic) NSURL *instanceURL;
@property (readonly, copy, nonatomic) NSURL *providerURL;
@property (readonly, copy, nonatomic) NSURL *supplementURL;
@property (readonly, copy, nonatomic) NSURL *typeURL;
@property (readonly, copy, nonatomic) NSURL *versionsURL;


+(id)pathWithContainerURL:(id)arg0 identity:(id)arg1 ;
+(id)pathWithProviderURL:(id)arg0 identity:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isServerPosterPath;
-(id)containerURL;
-(id)extendContentsReadAccessToAuditToken:(id)arg0 error:(*id)arg1 ;
-(id)extendInstanceReadAccessToAuditToken:(id)arg0 error:(*id)arg1 ;


@end


#endif