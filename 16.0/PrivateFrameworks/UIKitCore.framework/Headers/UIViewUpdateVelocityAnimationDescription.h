// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIVIEWUPDATEVELOCITYANIMATIONDESCRIPTION_H
#define UIVIEWUPDATEVELOCITYANIMATIONDESCRIPTION_H

@protocol UIVectorOperatable;

#import <Foundation/Foundation.h>


@interface UIViewUpdateVelocityAnimationDescription : NSObject

@property (retain, nonatomic) NSObject<UIVectorOperatable> *targetVelocity; // ivar: _targetVelocity
@property (retain, nonatomic) NSObject<UIVectorOperatable> *velocity; // ivar: _velocity


+(id)descriptionWithVelocity:(id)arg0 targetVelocity:(id)arg1 ;
-(id)initWithVelocity:(id)arg0 targetVelocity:(id)arg1 ;


@end


#endif