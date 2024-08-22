// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDTIMENODE_H
#define PDTIMENODE_H

@class NSMutableArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "PDIterate.h"

@interface PDTimeNode : NSObject {
    NSMutableArray *mStartTimeConditions;
    NSMutableArray *mEndTimeConditions;
    NSMutableArray *mChildTimeNodeList;
    NSMutableArray *mSubTimeNodeList;
    PDIterate *mIterate;
    int mType;
    int mAnimationPresetClass;
    BOOL mHasPresetId;
    int mPresetId;
    BOOL mHasPresetSubType;
    int mPresetSubType;
    BOOL mHasRepeatCount;
    int mRepeatCount;
    BOOL mHasRepeatDuration;
    int mRepeatDuration;
    int mRestartType;
    BOOL mHasDuration;
    CGFloat mDuration;
    BOOL mHasSpeed;
    CGFloat mSpeed;
    BOOL mHasAcceleration;
    CGFloat mAcceleration;
    BOOL mHasDeceleration;
    CGFloat mDeceleration;
    BOOL mHasDisplay;
    BOOL mDisplay;
    BOOL mHasFillType;
    int mFillType;
    NSString *mGroupId;
}


@property (retain, nonatomic) NSDictionary *attributeMap; // ivar: attributeMap


-(BOOL)display;
-(BOOL)hasAcceleration;
-(BOOL)hasDeceleration;
-(BOOL)hasDisplay;
-(BOOL)hasDuration;
-(BOOL)hasFillType;
-(BOOL)hasPresetClass;
-(BOOL)hasPresetId;
-(BOOL)hasPresetSubType;
-(BOOL)hasRepeatCount;
-(BOOL)hasRepeatDuration;
-(BOOL)hasRestartType;
-(BOOL)hasSpeed;
-(BOOL)hasType;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)acceleration;
-(CGFloat)deceleration;
-(CGFloat)duration;
-(CGFloat)speed;
-(NSInteger)writeDuration;
-(NSInteger)writeRepeatCount;
-(NSUInteger)hash;
-(id)childTimeNodeList;
-(id)description;
-(id)endTimeConditions;
-(id)groupId;
-(id)init;
-(id)iterate;
-(id)startTimeConditions;
-(id)subTimeNodeList;
-(int)animationPresetClass;
-(int)fillType;
-(int)presetId;
-(int)presetSubType;
-(int)repeatCount;
-(int)repeatDuration;
-(int)restartType;
-(int)type;
-(void)setAcceleration:(CGFloat)arg0 ;
-(void)setAnimationPresetClass:(int)arg0 ;
-(void)setChildTimeNodeList:(id)arg0 ;
-(void)setDeceleration:(CGFloat)arg0 ;
-(void)setDisplay:(BOOL)arg0 ;
-(void)setDuration:(CGFloat)arg0 ;
-(void)setEndTimeConditions:(id)arg0 ;
-(void)setFillType:(int)arg0 ;
-(void)setGroupId:(id)arg0 ;
-(void)setGroupIdValue:(int)arg0 ;
-(void)setIterate:(id)arg0 ;
-(void)setPresetId:(int)arg0 ;
-(void)setPresetSubType:(int)arg0 ;
-(void)setRepeatCount:(int)arg0 ;
-(void)setRepeatDuration:(int)arg0 ;
-(void)setRestartType:(int)arg0 ;
-(void)setSpeed:(CGFloat)arg0 ;
-(void)setStartTimeConditions:(id)arg0 ;
-(void)setSubTimeNodeList:(id)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif