// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTIDCONFIG_H
#define MTIDCONFIG_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface MTIDConfig : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: _cache
@property (retain, nonatomic) NSMutableDictionary *clientIdNamespacesByTopic; // ivar: _clientIdNamespacesByTopic
@property (retain, nonatomic) NSString *defaultClientIdNamespace; // ivar: _defaultClientIdNamespace
@property (retain, nonatomic) NSString *defaultUserIdNamespace; // ivar: _defaultUserIdNamespace
@property (retain, nonatomic) NSString *performanceTopic; // ivar: _performanceTopic
@property (retain, nonatomic) NSMutableDictionary *userIdNamespacesByTopic; // ivar: _userIdNamespacesByTopic


-(NSUInteger)calculateCombinedHashForNamespaces:(id)arg0 ;
-(id)allKnownSchemes;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)namespaceForTopic:(id)arg0 idType:(NSInteger)arg1 ;
-(id)schemeForNamespace:(id)arg0 ;


@end


#endif