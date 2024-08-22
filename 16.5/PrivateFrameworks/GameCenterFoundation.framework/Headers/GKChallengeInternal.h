// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCHALLENGEINTERNAL_H
#define GKCHALLENGEINTERNAL_H

@class NSString, NSOrderedSet, NSDate;


#import "GKInternalRepresentation.h"
#import "GKGameInternal.h"
#import "GKPlayerInternal.h"

@interface GKChallengeInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *challengeID; // ivar: _challengeID
@property (retain, nonatomic) NSOrderedSet *compatibleBundleIDs; // ivar: _compatibleBundleIDs
@property (retain, nonatomic) NSDate *completionDate; // ivar: _completionDate
@property (retain, nonatomic) GKGameInternal *game; // ivar: _game
@property (retain, nonatomic) NSDate *issueDate; // ivar: _issueDate
@property (retain, nonatomic) GKPlayerInternal *issuingPlayer; // ivar: _issuingPlayer
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) GKPlayerInternal *receivingPlayer; // ivar: _receivingPlayer
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSString *subtitleText;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSUInteger type;


+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)descriptionSubstitutionMap;
-(id)findLocalGameBundleID;
-(id)serverRepresentation;
-(id)serverRepresentationForReceivingPlayer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif