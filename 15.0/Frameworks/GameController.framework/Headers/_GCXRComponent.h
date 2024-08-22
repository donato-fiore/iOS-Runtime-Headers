// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCXRCOMPONENT_H
#define _GCXRCOMPONENT_H

@class NSString, NSMutableDictionary;
@protocol GCXRComponent, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"
#import "GCPhysicalInputProfile.h"
#import "_GCHandSkeleton.h"

@interface _GCXRComponent : NSObject <GCXRComponent>

 {
    GCController *_controller;
    GCPhysicalInputProfile *_physicalInput;
    _GCHandSkeleton *_leftHandSkeleton;
    _GCHandSkeleton *_rightHandSkeleton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *handSkeletons; // ivar: _handSkeletons
@property (readonly) NSUInteger hash;
@property (retain) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)componentWithPhysicalInputProfile:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)setController:(id)arg0 ;
-(void)updateSkeletons;


@end


#endif