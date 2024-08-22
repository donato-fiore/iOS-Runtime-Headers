// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPATTERNFILL_H
#define EDPATTERNFILL_H



#import "EDFill.h"
#import "EDColorReference.h"

@interface EDPatternFill : EDFill {
    int mType;
    EDColorReference *mBackColorReference;
    EDColorReference *mForeColorReference;
}




+(id)patternFillWithType:(int)arg0 foreColor:(id)arg1 backColor:(id)arg2 resources:(id)arg3 ;
+(id)patternFillWithType:(int)arg0 foreColor:(id)arg1 resources:(id)arg2 ;
+(id)patternFillWithType:(int)arg0 foreColorReference:(id)arg1 backColorReference:(id)arg2 resources:(id)arg3 ;
+(id)patternFillWithType:(int)arg0 resources:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPatternFill:(id)arg0 ;
-(NSUInteger)hash;
-(id)backColor;
-(id)backColorReference;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)foreColor;
-(id)foreColorReference;
-(id)initWithResources:(id)arg0 ;
-(id)initWithType:(int)arg0 foreColor:(id)arg1 backColor:(id)arg2 resources:(id)arg3 ;
-(id)initWithType:(int)arg0 foreColorReference:(id)arg1 backColorReference:(id)arg2 resources:(id)arg3 ;
-(int)type;
-(void)setBackColor:(id)arg0 ;
-(void)setBackColorReference:(id)arg0 ;
-(void)setForeColor:(id)arg0 ;
-(void)setForeColorReference:(id)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif