// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKDYNAMICITEMPROXY_H
#define OKDYNAMICITEMPROXY_H

@class NSArray, UIDynamicItemBehavior, UIBezierPath, NSString;
@protocol UIDynamicItem, OKDynamicItemProxiedObject;

#import <Foundation/Foundation.h>


@interface OKDynamicItemProxy : NSObject <UIDynamicItem>



@property (retain, nonatomic) NSArray *attachmentBehaviors; // ivar: _attachmentBehaviors
@property (readonly) UIDynamicItemBehavior *bodyBehavior; // ivar: _bodyBehavior
@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) CGPoint center; // ivar: _center
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly, nonatomic) NSUInteger collisionBoundsType;
@property (retain, nonatomic) NSArray *collisionGroups; // ivar: _collisionGroups
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL gravityDisabled; // ivar: _gravityDisabled
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OKDynamicItemProxiedObject> *proxiedObject; // ivar: _proxiedObject
@property (retain, nonatomic) NSArray *pushGroups; // ivar: _pushGroups
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform; // ivar: _transform


-(id)init;
-(id)initWithProxiedObject:(id)arg0 ;
-(void)dealloc;
-(void)enforceInitialCenter:(struct CGPoint )arg0 size:(struct CGSize )arg1 andTransform:(struct CGAffineTransform )arg2 ;
-(void)resetInitialValues;


@end


#endif