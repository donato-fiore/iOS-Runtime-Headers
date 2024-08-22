// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKPLAYERACTIVITYRELATIONSHIPGAME_H
#define GKPLAYERACTIVITYRELATIONSHIPGAME_H

@class NSNumber;


#import "GKPlayerActivityRelationshipBase.h"
#import "GKPlayerActivityRelationshipIcon.h"

@interface GKPlayerActivityRelationshipGame : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) NSNumber *adamId; // ivar: _adamId
@property (retain, nonatomic) GKPlayerActivityRelationshipIcon *icon; // ivar: _icon


+(id)secureCodedPropertyKeys;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif