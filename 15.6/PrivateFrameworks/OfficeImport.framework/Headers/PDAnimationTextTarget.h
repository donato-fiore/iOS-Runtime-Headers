// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDANIMATIONTEXTTARGET_H
#define PDANIMATIONTEXTTARGET_H



#import "PDAnimationShapeTarget.h"

@interface PDAnimationTextTarget : PDAnimationShapeTarget {
    int mType;
    _NSRange mRange;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(int)type;
-(struct _NSRange )range;
-(void)setRange:(struct _NSRange )arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif