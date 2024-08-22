// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPPROPERTYANIMATION_H
#define POPPROPERTYANIMATION_H



#import "POPAnimation.h"
#import "POPAnimatableProperty.h"

@interface POPPropertyAnimation : POPAnimation

@property (nonatomic, getter=isAdditive) BOOL additive;
@property (nonatomic) NSUInteger clampMode;
@property (copy, nonatomic) id *fromValue;
@property (retain, nonatomic) POPAnimatableProperty *property;
@property (nonatomic) CGFloat roundingFactor;
@property (copy, nonatomic) id *toValue;


// +(id)animationWithCustomPropertyNamed:(id)arg0 readBlock:(id)arg1 writeBlock:(unk)arg2  ;
// +(id)animationWithCustomPropertyReadBlock:(id)arg0 writeBlock:(unk)arg1  ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentValue;
-(id)progressMarkers;
-(void)_appendDescription:(id)arg0 debug:(BOOL)arg1 ;
-(void)_initState;
-(void)setProgressMarkers:(id)arg0 ;


@end


#endif