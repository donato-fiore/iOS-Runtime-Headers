// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NENETWORKRULE_H
#define NENETWORKRULE_H

@class NWHostEndpoint;
@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NENetworkRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL appliesToLoopback; // ivar: _appliesToLoopback
@property (readonly) NSInteger matchDirection; // ivar: _matchDirection
@property (readonly) NWHostEndpoint *matchLocalNetwork; // ivar: _matchLocalNetwork
@property (readonly) NSUInteger matchLocalPrefix; // ivar: _matchLocalPrefix
@property (readonly) NSInteger matchProtocol; // ivar: _matchProtocol
@property (readonly) NWHostEndpoint *matchRemoteEndpoint; // ivar: _matchRemoteEndpoint
@property (readonly) NSUInteger matchRemotePrefix; // ivar: _matchRemotePrefix


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinationHost:(id)arg0 protocol:(NSInteger)arg1 ;
-(id)initWithDestinationNetwork:(id)arg0 prefix:(NSUInteger)arg1 protocol:(NSInteger)arg2 ;
-(id)initWithRemoteNetwork:(id)arg0 remotePrefix:(NSUInteger)arg1 localNetwork:(id)arg2 localPrefix:(NSUInteger)arg3 protocol:(NSInteger)arg4 direction:(NSInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif