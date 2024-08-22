// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCONTACTRELATIONSHIPRESULT_H
#define GKCONTACTRELATIONSHIPRESULT_H

@class NSString;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"

@interface GKContactRelationshipResult : GKInternalRepresentation

@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (retain, nonatomic) GKPlayerInternal *relatedPlayer; // ivar: _relatedPlayer
@property (nonatomic) int relationship; // ivar: _relationship


+(id)secureCodedPropertyKeys;


@end


#endif