// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATUREAVAILABILITYCONTEXTCONSTRAINT_H
#define HKFEATUREAVAILABILITYCONTEXTCONSTRAINT_H


#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityContextConstraint : NSObject

@property (readonly, nonatomic) id *acceptsContext; // ivar: _acceptsContext


+(id)allContexts;
+(id)onlySomeContexts:(id)arg0 ;
-(BOOL)acceptsContext:(id)arg0 ;
-(id)initWithAcceptsContext:(id)arg0 ;


@end


#endif