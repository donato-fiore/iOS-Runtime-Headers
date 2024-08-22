// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAANIMATION_H
#define CAANIMATION_H

@class NSString;
@protocol NSMutableCopying, CAPropertyInfo, NSSecureCoding, NSCopying, CAMediaTiming, CAAction, CAAnimationDelegate;

#import <Foundation/Foundation.h>

#import "CAStateControllerTransition.h"
#import "CAMediaTimingFunction.h"

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSSecureCoding, NSCopying, CAMediaTiming, CAAction>

 {
    *void _attr;
    unsigned int _flags;
}


@property (weak) CAStateControllerTransition *CAStateControllerTransition;
@property BOOL autoreverses;
@property CGFloat beginTime;
@property (copy) NSString *beginTimeMode;
@property (retain) NSObject<CAAnimationDelegate> *delegate;
@property BOOL discretizesTime;
@property CGFloat duration;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *fillMode;
@property CGFloat frameInterval;
@property unsigned int highFrameRateReason;
@property CAFrameRateRange preferredFrameRateRange;
@property float preferredFrameRateRangeMaximum;
@property float preferredFrameRateRangeMinimum;
@property float preferredFrameRateRangePreferred;
@property NSInteger preferredFramesPerSecond;
@property (getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property float repeatCount;
@property CGFloat repeatDuration;
@property float speed;
@property CGFloat timeOffset;
@property (retain) CAMediaTimingFunction *timingFunction;


+(*unk)CA_getterForProperty:(struct _CAPropertyInfo *)arg0 ;
+(*unk)CA_setterForProperty:(struct _CAPropertyInfo *)arg0 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)CA_encodesPropertyConditionally:(unsigned int)arg0 type:(int)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)animation;
+(id)defaultValueForKey:(id)arg0 ;
+(id)properties;
+(void)CAMLParserStartElement:(id)arg0 ;
-(BOOL)CAMLTypeSupportedForKey:(id)arg0 ;
-(BOOL)_setCARenderAnimation:(*void)arg0 layer:(id)arg1 ;
-(BOOL)removedOnCompletion;
-(BOOL)shouldArchiveValueForKey:(id)arg0 ;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct Object *)CA_copyRenderValue;
-(unsigned int)_propertyFlagsForLayer:(id)arg0 ;
-(void)CAMLParser:(id)arg0 setValue:(id)arg1 forKey:(id)arg2 ;
-(void)applyForTime:(CGFloat)arg0 presentationObject:(id)arg1 modelObject:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)runActionForKey:(id)arg0 object:(id)arg1 arguments:(id)arg2 ;
-(void)setDefaultDuration:(CGFloat)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif