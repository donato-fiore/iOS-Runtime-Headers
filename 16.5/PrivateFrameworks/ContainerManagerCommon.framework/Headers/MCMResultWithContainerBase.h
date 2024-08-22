// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTWITHCONTAINERBASE_H
#define MCMRESULTWITHCONTAINERBASE_H

@class NSString, NSDictionary, NSArray, NSURL, NSUUID;
@protocol MCMResultWithContainer;


#import "MCMResultBase.h"
#import "MCMError.h"
#import "MCMPOSIXUser.h"

@interface MCMResultWithContainerBase : MCMResultBase <MCMResultWithContainer>



@property (readonly, nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (readonly, nonatomic) NSString *containerPathIdentifier; // ivar: _containerPathIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) BOOL existed; // ivar: _existed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *info; // ivar: _info
@property (readonly, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (readonly, nonatomic) MCMPOSIXUser *posixUser; // ivar: _posixUser
@property (readonly, nonatomic) NSArray *resolvedLinks; // ivar: _resolvedLinks
@property (readonly, nonatomic) char * sandboxToken; // ivar: _sandboxToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL transient; // ivar: _transient
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithContainerPath:(id)arg0 containerIdentity:(id)arg1 uuid:(id)arg2 sandboxToken:(char *)arg3 includePath:(BOOL)arg4 ;
-(id)initWithMetadata:(id)arg0 sandboxToken:(char *)arg1 includePath:(BOOL)arg2 includeInfo:(BOOL)arg3 resolvedLinks:(id)arg4 ;
-(id)initWithUUID:(id)arg0 containerPathIdentifier:(id)arg1 identifier:(id)arg2 containerClass:(NSUInteger)arg3 POSIXUser:(id)arg4 personaUniqueString:(id)arg5 sandboxToken:(char *)arg6 existed:(BOOL)arg7 url:(id)arg8 info:(id)arg9 resolvedLinks:(id)arg10 transient:(BOOL)arg11 ;
-(void)dealloc;


@end


#endif