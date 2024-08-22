// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPUBLICCHANNEL_H
#define PKPUBLICCHANNEL_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKPublicChannel : NSObject

@property (copy, nonatomic) NSString *channelID; // ivar: _channelID
@property (retain, nonatomic) NSString *channelTopic; // ivar: _channelTopic
@property (nonatomic) NSUInteger checkpoint; // ivar: _checkpoint
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSString *environment; // ivar: _environment
@property (retain, nonatomic) NSString *tokenName; // ivar: _tokenName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithChannelID:(id)arg0 ;
-(id)initWithChannelID:(id)arg0 channelTopic:(id)arg1 environment:(id)arg2 checkpoint:(NSUInteger)arg3 ;
-(id)initWithChannelID:(id)arg0 channelTopic:(id)arg1 environment:(id)arg2 tokenName:(id)arg3 checkpoint:(NSUInteger)arg4 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif