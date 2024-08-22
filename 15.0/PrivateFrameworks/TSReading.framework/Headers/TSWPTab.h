// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTAB_H
#define TSWPTAB_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPTab : NSObject <NSCopying>



@property (nonatomic) int alignment; // ivar: _alignment
@property (copy, nonatomic) NSString *leader; // ivar: _leader
@property (nonatomic) CGFloat position; // ivar: _position


+(id)displayStringFromTabLeader:(id)arg0 ;
+(id)kTabStopAlignmentStringCenter;
+(id)kTabStopAlignmentStringDecimal;
+(id)kTabStopAlignmentStringLeft;
+(id)kTabStopAlignmentStringRight;
+(id)kTabStopDisplayStringArrow;
+(id)kTabStopDisplayStringDash;
+(id)kTabStopDisplayStringNone;
+(id)kTabStopDisplayStringPoint;
+(id)kTabStopDisplayStringUnderscore;
+(id)kTabStopLeaderStringArrow;
+(id)kTabStopLeaderStringArrowRTL;
+(id)kTabStopLeaderStringDash;
+(id)kTabStopLeaderStringPoint;
+(id)kTabStopLeaderStringUnderscore;
+(id)stringFromTabAlignment:(int)arg0 isRTL:(BOOL)arg1 ;
+(id)tab;
+(id)tabLeaderFromDisplayString:(id)arg0 ;
+(int)tabAlignmentFromString:(id)arg0 isRTL:(BOOL)arg1 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPosition:(CGFloat)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareToPosition:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPosition:(CGFloat)arg0 alignment:(int)arg1 leader:(id)arg2 ;
-(void)dealloc;


@end


#endif