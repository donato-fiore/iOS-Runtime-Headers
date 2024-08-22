// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCONCERNINTERNAL_H
#define GKCONCERNINTERNAL_H

@class NSString;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"

@interface GKConcernInternal : GKInternalRepresentation

@property (nonatomic) unsigned int concernID; // ivar: _concernID
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) GKPlayerInternal *player; // ivar: _player


+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif