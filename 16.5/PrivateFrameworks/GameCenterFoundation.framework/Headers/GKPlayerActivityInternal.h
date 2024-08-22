// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPLAYERACTIVITYINTERNAL_H
#define GKPLAYERACTIVITYINTERNAL_H

@class NSString, NSArray;


#import "GKInternalRepresentation.h"

@interface GKPlayerActivityInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *continuationToken; // ivar: _continuationToken
@property (retain, nonatomic) NSArray *sections; // ivar: _sections


+(id)secureCodedPropertyKeys;
-(id)description;
-(id)initWithServerResponse:(id)arg0 ;


@end


#endif