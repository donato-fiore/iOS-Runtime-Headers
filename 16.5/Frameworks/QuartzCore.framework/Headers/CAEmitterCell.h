// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAEMITTERCELL_H
#define CAEMITTERCELL_H

@class NSString, NSArray, NSDictionary;
@protocol NSCopying, CAPropertyInfo, NSSecureCoding, CAMediaTiming;

#import <Foundation/Foundation.h>


@interface CAEmitterCell : NSObject <NSCopying, CAPropertyInfo, NSSecureCoding, CAMediaTiming>

 {
    *void _attr;
    *void _state;
    unsigned int _flags;
}


@property float alphaRange;
@property float alphaSpeed;
@property BOOL autoreverses;
@property CGFloat beginTime;
@property float birthRate;
@property float blueRange;
@property float blueSpeed;
@property *CGColor color;
@property (retain) id *contents;
@property unsigned int contentsFrameCount;
@property (copy) NSString *contentsFrameMode;
@property unsigned int contentsFramesPerRow;
@property float contentsFramesPerSecond;
@property CGRect contentsRect;
@property CGFloat contentsScale;
@property CGFloat duration;
@property CGFloat emissionLatitude;
@property CGFloat emissionLongitude;
@property CGFloat emissionRange;
@property (copy) NSArray *emitterBehaviors;
@property (copy) NSArray *emitterCells;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *fillMode;
@property float greenRange;
@property float greenSpeed;
@property float lifetime;
@property float lifetimeRange;
@property (copy) NSString *magnificationFilter;
@property float mass;
@property float massRange;
@property (copy) NSString *minificationFilter;
@property float minificationFilterBias;
@property (copy) NSString *name;
@property CGFloat orientationLatitude;
@property CGFloat orientationLongitude;
@property CGFloat orientationRange;
@property (copy) NSString *particleType;
@property float redRange;
@property float redSpeed;
@property float repeatCount;
@property CGFloat repeatDuration;
@property CGFloat rotation;
@property CGFloat rotationRange;
@property CGFloat scale;
@property CGFloat scaleRange;
@property CGFloat scaleSpeed;
@property float speed;
@property CGFloat spin;
@property CGFloat spinRange;
@property (copy) NSDictionary *style;
@property CGFloat timeOffset;
@property CGFloat velocity;
@property CGFloat velocityRange;
@property CGFloat xAcceleration;
@property CGFloat yAcceleration;
@property CGFloat zAcceleration;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)defaultValueForKey:(id)arg0 ;
+(id)emitterCell;
+(id)properties;
+(void)CAMLParserStartElement:(id)arg0 ;
-(BOOL)CAMLTypeSupportedForKey:(id)arg0 ;
-(BOOL)CA_validateValue:(id)arg0 forKey:(id)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg0 ;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct Object *)CA_copyRenderValue;
-(void)CAMLParser:(id)arg0 setValue:(id)arg1 forKey:(id)arg2 ;
-(void)CA_prepareRenderValue;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif