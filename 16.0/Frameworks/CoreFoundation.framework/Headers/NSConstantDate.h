// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCONSTANTDATE_H
#define NSCONSTANTDATE_H



#import "NSDate.h"

@interface NSConstantDate : NSDate {
    CGFloat _ti;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)new;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(CGFloat)timeIntervalSinceReferenceDate;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(void)dealloc;
-(void)release;


@end


#endif