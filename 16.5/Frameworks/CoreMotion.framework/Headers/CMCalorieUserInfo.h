// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCALORIEUSERINFO_H
#define CMCALORIEUSERINFO_H



#import "CMLogItem.h"

@interface CMCalorieUserInfo : CMLogItem {
    CGFloat fAge;
    NSInteger fGender;
    CGFloat fHeight;
    CGFloat fWeight;
    NSInteger fCondition;
    BOOL fBetaBlockerUse;
}


@property (readonly, nonatomic) CGFloat age;
@property (readonly, nonatomic) BOOL betaBlockerUse;
@property (readonly, nonatomic) NSInteger condition;
@property (readonly, nonatomic) NSInteger gender;
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) CGFloat weight;


+(BOOL)supportsSecureCoding;
+(id)genderString:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAge:(CGFloat)arg0 gender:(NSInteger)arg1 height:(CGFloat)arg2 weight:(CGFloat)arg3 ;
-(id)initWithAge:(CGFloat)arg0 gender:(NSInteger)arg1 height:(CGFloat)arg2 weight:(CGFloat)arg3 condition:(NSInteger)arg4 ;
-(id)initWithAge:(CGFloat)arg0 gender:(NSInteger)arg1 height:(CGFloat)arg2 weight:(CGFloat)arg3 condition:(NSInteger)arg4 betaBlockerUse:(BOOL)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif