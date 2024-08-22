// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKACHIEVEMENTDESCRIPTION_H
#define GKACHIEVEMENTDESCRIPTION_H

@class NSString, UIImage;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKAchievementInternal.h"

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *achievedDescription;
@property (readonly, retain, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain) GKAchievementInternal *internal; // ivar: _internal
@property (readonly, nonatomic) NSInteger maximumPoints;
@property (readonly, nonatomic, getter=isReplayable) BOOL replayable;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *unachievedDescription;


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_achievementDescriptionFromGame:(id)arg0 propertyListDictionary:(id)arg1 ;
+(id)_loadLocalAchievementDescriptionsForGame:(id)arg0 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(void)loadAchievementDescriptionsForGame:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)loadAchievementDescriptionsWithCompletionHandler:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)game;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif