// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPUANIMATIONFACTORY_H
#define MPUANIMATIONFACTORY_H

@class NSArray, NSString, CAMediaTimingFunction;
@protocol _UIBasicAnimationFactory;

#import <Foundation/Foundation.h>


@interface MPUAnimationFactory : NSObject <_UIBasicAnimationFactory>



@property (copy, nonatomic) NSArray *allowedKeyPaths; // ivar: _allowedKeyPaths
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fillMode; // ivar: _fillMode
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion; // ivar: _removedOnCompletion
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeOffset; // ivar: _timeOffset
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)init;


@end


#endif