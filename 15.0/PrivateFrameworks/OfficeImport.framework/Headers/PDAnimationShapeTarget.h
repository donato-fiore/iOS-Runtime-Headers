// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDANIMATIONSHAPETARGET_H
#define PDANIMATIONSHAPETARGET_H



#import "PDAnimationTarget.h"
#import "OADDrawable.h"

@interface PDAnimationShapeTarget : PDAnimationTarget {
    OADDrawable *mDrawable;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)drawable;
-(id)init;
-(void)setDrawable:(id)arg0 ;


@end


#endif