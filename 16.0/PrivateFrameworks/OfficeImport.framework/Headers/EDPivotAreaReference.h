// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPIVOTAREAREFERENCE_H
#define EDPIVOTAREAREFERENCE_H


#import <Foundation/Foundation.h>


@interface EDPivotAreaReference : NSObject {
    BOOL mByPosition;
    BOOL mRelative;
    BOOL mSelected;
    NSUInteger mFieldId;
    NSUInteger mCount;
}




+(id)pivotAreaReference;
-(BOOL)byPosition;
-(BOOL)relative;
-(BOOL)selected;
-(NSUInteger)count;
-(NSUInteger)fieldId;
-(id)description;
-(id)init;
-(void)setByPosition:(BOOL)arg0 ;
-(void)setCount:(NSUInteger)arg0 ;
-(void)setFieldId:(NSUInteger)arg0 ;
-(void)setRelative:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif