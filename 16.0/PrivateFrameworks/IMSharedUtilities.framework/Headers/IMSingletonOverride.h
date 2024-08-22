// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSINGLETONOVERRIDE_H
#define IMSINGLETONOVERRIDE_H

@class NSString;
@protocol IMSingletonOverriding;

#import <Foundation/Foundation.h>


@interface IMSingletonOverride : NSObject <IMSingletonOverriding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) id *overriddenSingleton; // ivar: _overriddenSingleton
@property (readonly) Class superclass;


-(BOOL)shouldInvokeSelector:(SEL)arg0 onSingleton:(id)arg1 ;
-(void)didOverrideSingleton:(id)arg0 ;


@end


#endif