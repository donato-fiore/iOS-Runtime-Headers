// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKACHIEVEMENTINTERNAL_H
#define GKACHIEVEMENTINTERNAL_H

@class NSString, NSDictionary, NSDate;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"

@interface GKAchievementInternal : GKInternalRepresentation {
    ? _attributes;
}


@property (retain, nonatomic) NSString *achievedDescription; // ivar: _achievedDescription
@property (nonatomic) unsigned int attributes;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (retain, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) NSDictionary *icons; // ivar: _icons
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDate *lastReportedDate; // ivar: _lastReportedDate
@property (nonatomic) unsigned short maximumPoints;
@property (nonatomic) CGFloat percentComplete; // ivar: _percentComplete
@property (retain, nonatomic) GKPlayerInternal *player; // ivar: _player
@property (nonatomic, getter=isReplayable) BOOL replayable;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *unachievedDescription; // ivar: _unachievedDescription


+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)descriptionSubstitutionMap;
-(id)initWithCoder:(id)arg0 ;
-(id)serverRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergePropertiesFromDescription:(id)arg0 ;


@end


#endif