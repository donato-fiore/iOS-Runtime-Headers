// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXTRACKEDEFFECTPROPERTIES_H
#define JFXTRACKEDEFFECTPROPERTIES_H

@protocol NSCopying, NSSecureCoding, JFXTrackedEffectPropertiesDelegate;

#import <Foundation/Foundation.h>


@interface JFXTrackedEffectProperties : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger currentTrackingType;
@property (weak, nonatomic) NSObject<JFXTrackedEffectPropertiesDelegate> *delegate; // ivar: _delegate
@property (getter=isTrackingDisabled) BOOL disableTracking; // ivar: _disableTracking
@property NSInteger internalTrackingType; // ivar: _internalTrackingType
@property (nonatomic) NSInteger trackingType;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)enableTrackingState:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif