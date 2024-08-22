// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTIMEANIMATEVALUE_H
#define PXTIMEANIMATEVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXTimeAnimateValue : NSObject {
    id *mVariant;
    BOOL mHasPercentTime;
    CGFloat mPercentTime;
    NSString *mFormula;
}




-(BOOL)hasPercentTime;
-(CGFloat)percentTime;
-(id)formula;
-(id)init;
-(id)variant;
-(void)setFormula:(id)arg0 ;
-(void)setPercentTime:(CGFloat)arg0 ;
-(void)setVariant:(id)arg0 ;


@end


#endif